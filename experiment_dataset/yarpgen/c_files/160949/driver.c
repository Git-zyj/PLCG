#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)155;
unsigned long long int var_6 = 8243857649993661895ULL;
unsigned char var_8 = (unsigned char)72;
unsigned long long int var_10 = 5866323350034326775ULL;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-10276;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
