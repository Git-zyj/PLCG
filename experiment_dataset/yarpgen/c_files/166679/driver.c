#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12736;
long long int var_1 = 6336520173974682124LL;
unsigned int var_2 = 785029909U;
unsigned int var_3 = 2318155757U;
unsigned char var_5 = (unsigned char)89;
short var_6 = (short)-8350;
int zero = 0;
long long int var_11 = -7824438121782417811LL;
unsigned char var_12 = (unsigned char)5;
unsigned int var_13 = 1267163218U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
