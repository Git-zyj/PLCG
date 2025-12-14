#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2071916775;
unsigned short var_3 = (unsigned short)50442;
signed char var_4 = (signed char)-19;
unsigned char var_10 = (unsigned char)39;
signed char var_11 = (signed char)-28;
unsigned short var_12 = (unsigned short)6872;
int zero = 0;
unsigned long long int var_13 = 3111893944025381245ULL;
long long int var_14 = 9163059022978443024LL;
int var_15 = -3759690;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
