#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9179395318759653629ULL;
int var_5 = -463659053;
unsigned long long int var_7 = 9742659544261484427ULL;
int var_9 = 1143501654;
int zero = 0;
unsigned long long int var_10 = 9893486569364728413ULL;
unsigned long long int var_11 = 12131383162793619957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
