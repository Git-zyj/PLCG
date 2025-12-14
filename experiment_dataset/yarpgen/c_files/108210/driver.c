#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 342204057U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)32266;
long long int var_6 = 3720226011608977361LL;
unsigned char var_11 = (unsigned char)69;
long long int var_13 = 1240367826838954371LL;
unsigned char var_15 = (unsigned char)1;
int zero = 0;
unsigned long long int var_17 = 7694798984790444957ULL;
int var_18 = -1575375400;
signed char var_19 = (signed char)6;
void init() {
}

void checksum() {
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
