#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-32607;
_Bool var_4 = (_Bool)0;
short var_5 = (short)6866;
int var_6 = 102138916;
unsigned long long int var_7 = 3344604565971496001ULL;
int zero = 0;
unsigned int var_12 = 3752197300U;
int var_13 = -234929709;
unsigned char var_14 = (unsigned char)125;
unsigned short var_15 = (unsigned short)58330;
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
