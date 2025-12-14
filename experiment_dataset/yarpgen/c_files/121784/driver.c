#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2926902409U;
unsigned long long int var_8 = 18003800180627102793ULL;
signed char var_9 = (signed char)-100;
long long int var_13 = -478528882640253361LL;
int zero = 0;
unsigned long long int var_17 = 161162868801504908ULL;
unsigned int var_18 = 2105372279U;
unsigned short var_19 = (unsigned short)53706;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
