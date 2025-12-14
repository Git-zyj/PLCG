#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34020;
int var_2 = -2047579854;
unsigned short var_4 = (unsigned short)58437;
unsigned long long int var_5 = 7037012454072343851ULL;
int var_6 = 881179532;
int var_8 = -885902089;
unsigned long long int var_9 = 7195648709043793507ULL;
unsigned long long int var_10 = 9518561366886779557ULL;
unsigned long long int var_11 = 4466534084779728475ULL;
long long int var_12 = 3653878725839183690LL;
long long int var_14 = -8190764147816465985LL;
int zero = 0;
int var_15 = -1176157901;
unsigned short var_16 = (unsigned short)57587;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)20;
unsigned long long int var_19 = 17443778960453120086ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
