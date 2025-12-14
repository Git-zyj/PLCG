#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5677680096188022872ULL;
unsigned long long int var_4 = 8176611868584082156ULL;
unsigned int var_9 = 605995661U;
unsigned long long int var_10 = 11380932279300177000ULL;
unsigned int var_12 = 2130614629U;
unsigned int var_15 = 618974662U;
int zero = 0;
unsigned long long int var_17 = 2829742038630366269ULL;
unsigned int var_18 = 1668869748U;
unsigned int var_19 = 2954443487U;
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
