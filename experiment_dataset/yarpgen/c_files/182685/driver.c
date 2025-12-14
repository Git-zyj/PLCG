#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
unsigned int var_1 = 1005442418U;
unsigned int var_5 = 1161972859U;
int var_8 = -115425910;
unsigned long long int var_11 = 5947391318678379120ULL;
int zero = 0;
unsigned int var_12 = 1918824280U;
unsigned char var_13 = (unsigned char)255;
unsigned long long int var_14 = 10226641970604657141ULL;
unsigned char var_15 = (unsigned char)227;
unsigned long long int var_16 = 3262899941396159973ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
