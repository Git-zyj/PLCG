#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6433;
unsigned int var_8 = 1379040359U;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
long long int var_19 = -8916733096539629616LL;
unsigned long long int var_20 = 15842533820920792707ULL;
unsigned int var_21 = 2354467284U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
