#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned int var_2 = 2011674104U;
long long int var_3 = 6680354927178606501LL;
unsigned long long int var_10 = 12484316415233451410ULL;
int var_15 = -801927600;
int zero = 0;
unsigned int var_17 = 4053816469U;
unsigned short var_18 = (unsigned short)50088;
unsigned int var_19 = 919656130U;
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
