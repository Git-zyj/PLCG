#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)51633;
signed char var_15 = (signed char)-3;
unsigned long long int var_16 = 10779813498811590086ULL;
int zero = 0;
signed char var_18 = (signed char)111;
long long int var_19 = 8004120631804172759LL;
unsigned long long int var_20 = 5509152114473968507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
