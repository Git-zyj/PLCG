#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30171;
short var_1 = (short)2338;
signed char var_4 = (signed char)-109;
int var_5 = 893333475;
unsigned long long int var_6 = 14221037703150252938ULL;
unsigned char var_7 = (unsigned char)238;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)57;
int zero = 0;
signed char var_16 = (signed char)-28;
unsigned long long int var_17 = 1813940003618525638ULL;
unsigned short var_18 = (unsigned short)26944;
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
