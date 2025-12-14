#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)217;
unsigned char var_14 = (unsigned char)103;
int zero = 0;
unsigned char var_16 = (unsigned char)207;
signed char var_17 = (signed char)-53;
short var_18 = (short)19363;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
