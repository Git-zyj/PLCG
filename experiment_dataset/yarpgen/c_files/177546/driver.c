#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7319;
unsigned char var_2 = (unsigned char)10;
unsigned int var_3 = 3726946522U;
signed char var_5 = (signed char)74;
unsigned short var_6 = (unsigned short)2208;
signed char var_7 = (signed char)64;
unsigned char var_9 = (unsigned char)215;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-95;
void init() {
}

void checksum() {
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
