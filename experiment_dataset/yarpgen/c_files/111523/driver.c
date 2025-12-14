#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1376;
unsigned short var_3 = (unsigned short)34429;
short var_6 = (short)4618;
short var_10 = (short)-13150;
unsigned char var_11 = (unsigned char)162;
signed char var_12 = (signed char)46;
short var_17 = (short)-2064;
int zero = 0;
short var_20 = (short)-21779;
long long int var_21 = 8828184491772424842LL;
unsigned long long int var_22 = 3521661990712617644ULL;
signed char var_23 = (signed char)64;
unsigned int var_24 = 2028505913U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
