#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)232;
signed char var_6 = (signed char)-2;
int var_12 = -1486445067;
long long int var_14 = 3393740008591047466LL;
int zero = 0;
signed char var_19 = (signed char)-39;
signed char var_20 = (signed char)76;
unsigned short var_21 = (unsigned short)53687;
void init() {
}

void checksum() {
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
