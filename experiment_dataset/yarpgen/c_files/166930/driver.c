#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)26094;
signed char var_2 = (signed char)-65;
unsigned char var_4 = (unsigned char)22;
unsigned short var_5 = (unsigned short)41589;
signed char var_7 = (signed char)95;
signed char var_8 = (signed char)-9;
short var_9 = (short)-1932;
unsigned char var_11 = (unsigned char)108;
unsigned char var_13 = (unsigned char)170;
int zero = 0;
signed char var_14 = (signed char)38;
unsigned short var_15 = (unsigned short)48422;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
