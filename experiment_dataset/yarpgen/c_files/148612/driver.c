#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34110;
unsigned int var_3 = 980254119U;
unsigned long long int var_4 = 8193280807485060728ULL;
unsigned char var_11 = (unsigned char)78;
unsigned short var_15 = (unsigned short)8810;
unsigned char var_18 = (unsigned char)148;
unsigned char var_19 = (unsigned char)128;
int zero = 0;
signed char var_20 = (signed char)-52;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
