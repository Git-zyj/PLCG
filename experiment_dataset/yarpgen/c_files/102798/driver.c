#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43560;
long long int var_3 = 9202731715088438934LL;
unsigned int var_4 = 365958404U;
unsigned char var_5 = (unsigned char)156;
signed char var_7 = (signed char)70;
_Bool var_9 = (_Bool)1;
long long int var_11 = -2139942039916045980LL;
unsigned long long int var_13 = 13731906751812248613ULL;
short var_15 = (short)-28991;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
int var_19 = -2024591197;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)17;
short var_22 = (short)24799;
void init() {
}

void checksum() {
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
