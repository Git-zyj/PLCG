#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 13629462155984191039ULL;
unsigned long long int var_7 = 8513562749441424025ULL;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
unsigned short var_15 = (unsigned short)56671;
long long int var_16 = 991041572030707512LL;
unsigned short var_17 = (unsigned short)15903;
unsigned int var_18 = 2538099872U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
