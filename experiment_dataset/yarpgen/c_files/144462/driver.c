#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12113184029051465918ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 1786236070994109277ULL;
unsigned short var_10 = (unsigned short)47527;
unsigned char var_13 = (unsigned char)119;
unsigned int var_15 = 363400794U;
int zero = 0;
unsigned short var_19 = (unsigned short)31269;
unsigned short var_20 = (unsigned short)40916;
unsigned int var_21 = 3594519195U;
int var_22 = 305737197;
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
