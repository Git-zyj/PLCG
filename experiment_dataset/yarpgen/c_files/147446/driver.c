#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
signed char var_1 = (signed char)38;
signed char var_3 = (signed char)-92;
unsigned int var_4 = 835221111U;
unsigned int var_6 = 2937634712U;
short var_7 = (short)-26454;
unsigned long long int var_10 = 4223790407305853876ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53079;
unsigned char var_12 = (unsigned char)200;
int var_13 = 1679941436;
short var_14 = (short)1403;
long long int var_15 = -3285383163404702323LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
