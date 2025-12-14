#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)199;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)87;
long long int var_10 = 4862172794850975500LL;
unsigned short var_12 = (unsigned short)58681;
int zero = 0;
signed char var_17 = (signed char)64;
signed char var_18 = (signed char)74;
unsigned short var_19 = (unsigned short)12631;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
