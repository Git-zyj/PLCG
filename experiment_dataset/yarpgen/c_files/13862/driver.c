#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53151;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 2186527618U;
unsigned short var_7 = (unsigned short)28732;
short var_9 = (short)-2825;
short var_12 = (short)4721;
unsigned char var_13 = (unsigned char)112;
short var_15 = (short)-2186;
unsigned char var_17 = (unsigned char)199;
unsigned int var_18 = 700143817U;
int zero = 0;
unsigned long long int var_19 = 10349464612964831176ULL;
int var_20 = 32431565;
signed char var_21 = (signed char)-6;
short var_22 = (short)11703;
unsigned char var_23 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
