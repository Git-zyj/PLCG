#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22953;
unsigned char var_6 = (unsigned char)218;
int var_7 = -477324032;
unsigned char var_8 = (unsigned char)254;
unsigned short var_10 = (unsigned short)7869;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 10086784631930476671ULL;
long long int var_19 = 7207788008627218526LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)15074;
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
