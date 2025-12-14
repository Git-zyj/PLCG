#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3173628702002154390ULL;
int var_7 = -1599065453;
unsigned char var_11 = (unsigned char)90;
unsigned char var_14 = (unsigned char)17;
int zero = 0;
unsigned short var_20 = (unsigned short)53209;
unsigned char var_21 = (unsigned char)64;
_Bool var_22 = (_Bool)1;
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
