#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20496;
signed char var_4 = (signed char)21;
short var_5 = (short)-25517;
int var_6 = -741257939;
unsigned short var_7 = (unsigned short)34382;
unsigned int var_8 = 3225626020U;
unsigned long long int var_10 = 8894481596658062858ULL;
unsigned char var_16 = (unsigned char)50;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)101;
long long int var_20 = -5764918342413234469LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
