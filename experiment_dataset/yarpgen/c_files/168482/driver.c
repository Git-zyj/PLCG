#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16417247594234609945ULL;
unsigned long long int var_11 = 18442658580810397179ULL;
long long int var_13 = 3099994652178016030LL;
long long int var_14 = 5952049010243095344LL;
unsigned long long int var_15 = 6202692361670575652ULL;
unsigned long long int var_16 = 2838948257912978385ULL;
long long int var_17 = 8464705063372816629LL;
int zero = 0;
unsigned long long int var_19 = 387129464586608634ULL;
long long int var_20 = -1615875508594550294LL;
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
