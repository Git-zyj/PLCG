#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 393555697021930771LL;
long long int var_14 = 7992172118976594226LL;
long long int var_15 = 4578611674622056380LL;
int var_17 = -1745848455;
unsigned long long int var_18 = 8520565982677864427ULL;
int zero = 0;
unsigned long long int var_19 = 12914254439047762809ULL;
int var_20 = -1564378143;
unsigned long long int var_21 = 1679390763894631901ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
