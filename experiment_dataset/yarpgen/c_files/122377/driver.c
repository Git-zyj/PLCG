#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3722783323296952570ULL;
unsigned char var_5 = (unsigned char)202;
unsigned long long int var_7 = 7939525049224666136ULL;
unsigned long long int var_10 = 8418686540793682413ULL;
unsigned short var_11 = (unsigned short)53993;
int zero = 0;
unsigned char var_12 = (unsigned char)66;
short var_13 = (short)-13201;
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
