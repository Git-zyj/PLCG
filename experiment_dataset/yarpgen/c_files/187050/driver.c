#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
unsigned long long int var_3 = 12967006381882604244ULL;
int var_5 = -637526601;
signed char var_6 = (signed char)120;
short var_10 = (short)-260;
int var_11 = -1239802792;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)56827;
int zero = 0;
int var_18 = -1877020885;
unsigned short var_19 = (unsigned short)53474;
unsigned int var_20 = 539280996U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 520351209U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
