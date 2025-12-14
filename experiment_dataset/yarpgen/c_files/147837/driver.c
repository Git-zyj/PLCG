#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)5;
unsigned char var_5 = (unsigned char)59;
unsigned char var_9 = (unsigned char)77;
short var_11 = (short)26917;
unsigned long long int var_13 = 1680889074625871184ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_19 = -416661711;
unsigned int var_20 = 2797321419U;
unsigned char var_21 = (unsigned char)66;
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
