#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14761;
unsigned short var_2 = (unsigned short)11272;
unsigned short var_3 = (unsigned short)48788;
signed char var_4 = (signed char)-108;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)30035;
unsigned char var_9 = (unsigned char)19;
signed char var_10 = (signed char)-43;
int zero = 0;
unsigned short var_11 = (unsigned short)45797;
unsigned char var_12 = (unsigned char)148;
long long int var_13 = -9039873080352013092LL;
short var_14 = (short)-8706;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
