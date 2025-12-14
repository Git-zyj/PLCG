#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8061645023336244700ULL;
signed char var_3 = (signed char)-103;
unsigned char var_4 = (unsigned char)118;
unsigned long long int var_6 = 4145344543584092932ULL;
unsigned short var_7 = (unsigned short)30432;
signed char var_10 = (signed char)26;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
unsigned short var_12 = (unsigned short)49481;
unsigned int var_13 = 645988656U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
