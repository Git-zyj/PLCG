#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7092863097650731425LL;
unsigned int var_3 = 3155135940U;
unsigned short var_7 = (unsigned short)14236;
unsigned char var_10 = (unsigned char)253;
int var_17 = -1087106635;
int zero = 0;
long long int var_18 = -488249313762041685LL;
unsigned char var_19 = (unsigned char)162;
unsigned short var_20 = (unsigned short)53410;
void init() {
}

void checksum() {
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
