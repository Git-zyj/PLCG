#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3094791020U;
short var_6 = (short)32732;
unsigned int var_8 = 1427128862U;
short var_11 = (short)3607;
signed char var_14 = (signed char)42;
unsigned int var_18 = 2994863387U;
int zero = 0;
int var_19 = 441072432;
unsigned short var_20 = (unsigned short)51984;
short var_21 = (short)-25364;
short var_22 = (short)-26191;
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
