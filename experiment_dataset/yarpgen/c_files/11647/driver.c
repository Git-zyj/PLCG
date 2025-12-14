#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)63;
unsigned char var_4 = (unsigned char)203;
int var_9 = 1848411748;
unsigned char var_12 = (unsigned char)1;
long long int var_16 = -1603483911915341927LL;
int zero = 0;
long long int var_17 = 6945642301182934677LL;
long long int var_18 = -3389306029240228867LL;
long long int var_19 = 5886796313860492686LL;
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
