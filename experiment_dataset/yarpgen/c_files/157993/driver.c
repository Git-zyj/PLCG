#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50190;
unsigned char var_2 = (unsigned char)97;
int var_3 = 1177606351;
unsigned short var_13 = (unsigned short)21935;
int zero = 0;
short var_18 = (short)18506;
unsigned long long int var_19 = 10583827985182640006ULL;
unsigned long long int var_20 = 27562607303003589ULL;
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
