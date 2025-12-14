#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-5;
short var_7 = (short)-20855;
signed char var_11 = (signed char)-93;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 493633084U;
unsigned short var_15 = (unsigned short)51783;
void init() {
}

void checksum() {
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
