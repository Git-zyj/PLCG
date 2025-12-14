#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15557447520742136700ULL;
int var_4 = -2016084927;
unsigned int var_5 = 2635520325U;
short var_8 = (short)-1569;
int var_9 = -119191238;
short var_11 = (short)-21606;
int zero = 0;
unsigned short var_12 = (unsigned short)7994;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-84;
unsigned short var_15 = (unsigned short)50221;
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
