#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2941540579122223504LL;
unsigned int var_6 = 2278202086U;
unsigned char var_8 = (unsigned char)184;
unsigned char var_10 = (unsigned char)71;
int var_12 = -53391173;
unsigned short var_15 = (unsigned short)46436;
int zero = 0;
unsigned long long int var_17 = 18021452648490696622ULL;
int var_18 = 909308667;
long long int var_19 = -592396006006970562LL;
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
