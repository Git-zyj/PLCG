#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60011;
unsigned char var_1 = (unsigned char)14;
long long int var_4 = -2522110284321733657LL;
unsigned char var_6 = (unsigned char)143;
long long int var_7 = 9132974412452799430LL;
int zero = 0;
int var_11 = -1630056836;
int var_12 = 1372859456;
short var_13 = (short)-11068;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
