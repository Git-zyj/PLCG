#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)26898;
unsigned char var_7 = (unsigned char)181;
unsigned int var_9 = 1909225402U;
unsigned char var_10 = (unsigned char)19;
unsigned short var_12 = (unsigned short)44971;
signed char var_13 = (signed char)63;
int zero = 0;
unsigned long long int var_17 = 15984747799050342982ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)76;
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
