#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-127;
unsigned short var_7 = (unsigned short)13368;
unsigned long long int var_8 = 14816648953319632219ULL;
unsigned char var_9 = (unsigned char)211;
unsigned int var_10 = 2162346400U;
unsigned short var_11 = (unsigned short)63547;
int var_12 = -1332983936;
int var_13 = 417034481;
long long int var_15 = 3200506688392722814LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)19033;
short var_18 = (short)-23461;
int var_19 = 1573176093;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
