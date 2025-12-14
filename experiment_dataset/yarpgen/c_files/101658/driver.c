#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
unsigned char var_4 = (unsigned char)186;
int var_12 = 97177873;
int zero = 0;
long long int var_19 = -3847320951808090064LL;
short var_20 = (short)-3617;
unsigned char var_21 = (unsigned char)87;
unsigned short var_22 = (unsigned short)46161;
long long int var_23 = 6338700376911618982LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
