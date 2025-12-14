#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)21;
unsigned long long int var_10 = 13604509804779152286ULL;
unsigned long long int var_11 = 15801794722313896515ULL;
int var_14 = 868708159;
int zero = 0;
short var_15 = (short)16701;
unsigned long long int var_16 = 248026393859624012ULL;
void init() {
}

void checksum() {
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
