#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24473;
unsigned char var_3 = (unsigned char)182;
long long int var_4 = -7328932033142687214LL;
unsigned char var_6 = (unsigned char)12;
unsigned int var_7 = 501721683U;
int var_8 = 1770342636;
int zero = 0;
unsigned char var_13 = (unsigned char)245;
unsigned long long int var_14 = 3529440211181643373ULL;
unsigned int var_15 = 628991312U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
