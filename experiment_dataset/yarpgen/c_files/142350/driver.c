#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
signed char var_2 = (signed char)82;
int var_4 = 861829633;
signed char var_8 = (signed char)-122;
unsigned long long int var_12 = 7980204022241392825ULL;
int zero = 0;
long long int var_13 = 9076991265726456784LL;
unsigned char var_14 = (unsigned char)3;
unsigned short var_15 = (unsigned short)57973;
long long int var_16 = 6583965407526974605LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
