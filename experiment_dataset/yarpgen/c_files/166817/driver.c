#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18116474269028615994ULL;
unsigned short var_5 = (unsigned short)65117;
long long int var_6 = -1778488083139626548LL;
long long int var_8 = -4618502006651698205LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1360944U;
unsigned int var_14 = 2401963296U;
int var_15 = -1219401883;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
