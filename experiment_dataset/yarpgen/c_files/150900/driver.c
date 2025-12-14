#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6728975347774844739ULL;
unsigned long long int var_5 = 17809174706805080655ULL;
unsigned int var_7 = 4275595321U;
int var_8 = -1001380681;
signed char var_10 = (signed char)48;
long long int var_11 = -6027810339105707306LL;
unsigned short var_12 = (unsigned short)21815;
short var_13 = (short)-18418;
int zero = 0;
short var_14 = (short)22456;
int var_15 = 350339699;
short var_16 = (short)14134;
void init() {
}

void checksum() {
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
