#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
short var_2 = (short)7343;
unsigned int var_5 = 3673363674U;
short var_8 = (short)19161;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned char var_10 = (unsigned char)196;
long long int var_11 = 7727935158298873486LL;
unsigned char var_12 = (unsigned char)190;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4790892991949516558ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
