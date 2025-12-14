#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2528966951U;
unsigned long long int var_8 = 13390103184295942940ULL;
long long int var_9 = 1955377463601569199LL;
unsigned int var_10 = 3357848451U;
int zero = 0;
long long int var_11 = 6012395854057569319LL;
unsigned char var_12 = (unsigned char)208;
signed char var_13 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
