#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6926987254066929445ULL;
long long int var_5 = 6375336482942196259LL;
unsigned int var_12 = 1963168159U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)234;
unsigned int var_20 = 4128707392U;
unsigned int var_21 = 602844382U;
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
