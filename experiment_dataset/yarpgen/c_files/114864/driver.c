#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-16784;
long long int var_7 = 2463745815784582606LL;
unsigned int var_10 = 814771930U;
unsigned short var_18 = (unsigned short)49594;
int zero = 0;
unsigned int var_20 = 1820678833U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)51264;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 3314081174U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
