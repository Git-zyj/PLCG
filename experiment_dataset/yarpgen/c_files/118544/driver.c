#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45609;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)12;
signed char var_11 = (signed char)-27;
unsigned short var_12 = (unsigned short)22032;
signed char var_13 = (signed char)90;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)30634;
unsigned long long int var_17 = 1323516357958086052ULL;
signed char var_18 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
