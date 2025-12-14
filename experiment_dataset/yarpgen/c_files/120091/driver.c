#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4013530109U;
unsigned short var_8 = (unsigned short)21690;
int var_9 = -924769247;
unsigned int var_11 = 3154529732U;
unsigned int var_18 = 1336658267U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)18106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
