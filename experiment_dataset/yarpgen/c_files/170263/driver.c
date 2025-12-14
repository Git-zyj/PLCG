#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)160;
unsigned char var_7 = (unsigned char)49;
unsigned long long int var_8 = 3879262851170819375ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 13167602459671259462ULL;
unsigned char var_17 = (unsigned char)249;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1054779336;
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
