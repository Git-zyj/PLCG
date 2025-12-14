#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2981204285U;
long long int var_4 = 8151899185714275911LL;
long long int var_7 = 1246975848917172913LL;
int var_8 = 633251224;
int zero = 0;
long long int var_14 = -5811210507360730964LL;
long long int var_15 = -8602710953388933299LL;
long long int var_16 = -820779670468091068LL;
signed char var_17 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
