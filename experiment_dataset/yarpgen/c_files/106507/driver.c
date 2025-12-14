#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)21;
long long int var_5 = -4129424848159126936LL;
unsigned long long int var_11 = 5515323758789256195ULL;
signed char var_14 = (signed char)123;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
int var_21 = 940180075;
unsigned short var_22 = (unsigned short)36955;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
