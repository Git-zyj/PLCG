#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
unsigned short var_3 = (unsigned short)11205;
signed char var_4 = (signed char)-41;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 13198650728040099539ULL;
signed char var_8 = (signed char)-107;
short var_9 = (short)15235;
unsigned long long int var_10 = 6713919698199170366ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
signed char var_13 = (signed char)116;
unsigned char var_14 = (unsigned char)31;
void init() {
}

void checksum() {
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
