#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6194101559759965230ULL;
unsigned int var_2 = 2759880101U;
long long int var_7 = 501035660581489288LL;
int zero = 0;
unsigned char var_15 = (unsigned char)26;
int var_16 = -27304626;
long long int var_17 = 6407921742087381611LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
