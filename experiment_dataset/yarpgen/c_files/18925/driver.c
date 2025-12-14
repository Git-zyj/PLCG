#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5107363236704466909LL;
unsigned char var_3 = (unsigned char)107;
unsigned char var_5 = (unsigned char)156;
int var_8 = 617077613;
unsigned short var_9 = (unsigned short)51501;
unsigned long long int var_10 = 354577266446191464ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
long long int var_20 = 8961547067862232371LL;
_Bool var_21 = (_Bool)1;
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
