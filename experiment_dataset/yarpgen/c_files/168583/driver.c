#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -69074667;
unsigned long long int var_1 = 10172175791549335270ULL;
unsigned char var_4 = (unsigned char)127;
unsigned long long int var_5 = 1805066808570297443ULL;
unsigned int var_9 = 3010939907U;
unsigned char var_10 = (unsigned char)26;
unsigned char var_11 = (unsigned char)199;
unsigned char var_15 = (unsigned char)168;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3738303831U;
unsigned long long int var_19 = 4460478264511678169ULL;
unsigned long long int var_20 = 14294531052984673789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
