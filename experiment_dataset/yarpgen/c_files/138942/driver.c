#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1664177443;
unsigned int var_11 = 626676032U;
unsigned char var_12 = (unsigned char)61;
unsigned long long int var_16 = 8763170216565763179ULL;
int var_18 = -670117725;
int var_19 = -1810771285;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3738518030298409921ULL;
unsigned long long int var_22 = 6128690845334004968ULL;
signed char var_23 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
