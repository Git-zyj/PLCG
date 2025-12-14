#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61692;
short var_4 = (short)-21342;
unsigned short var_5 = (unsigned short)18743;
signed char var_6 = (signed char)-114;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)192;
int var_10 = 385274726;
int zero = 0;
signed char var_11 = (signed char)-125;
unsigned char var_12 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
