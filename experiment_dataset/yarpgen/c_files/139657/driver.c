#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36241;
unsigned char var_1 = (unsigned char)128;
unsigned long long int var_2 = 1622889218817977451ULL;
signed char var_4 = (signed char)106;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)129;
signed char var_7 = (signed char)-90;
signed char var_8 = (signed char)-7;
unsigned long long int var_10 = 4584758798950044330ULL;
signed char var_11 = (signed char)-82;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-54;
int zero = 0;
unsigned short var_14 = (unsigned short)7392;
unsigned char var_15 = (unsigned char)245;
signed char var_16 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
