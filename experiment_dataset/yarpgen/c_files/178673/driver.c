#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5180793767026168136ULL;
unsigned char var_7 = (unsigned char)12;
unsigned short var_8 = (unsigned short)26388;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1295985611;
long long int var_13 = 2967935002771526951LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
