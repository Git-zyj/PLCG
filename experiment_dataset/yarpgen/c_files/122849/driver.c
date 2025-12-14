#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1064816755U;
signed char var_5 = (signed char)-70;
unsigned int var_15 = 367060666U;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-49;
unsigned short var_21 = (unsigned short)39534;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
