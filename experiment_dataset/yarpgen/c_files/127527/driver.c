#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10811554426791648044ULL;
unsigned char var_3 = (unsigned char)233;
short var_4 = (short)-4919;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)67;
short var_9 = (short)-15529;
unsigned char var_11 = (unsigned char)194;
short var_12 = (short)-713;
unsigned char var_13 = (unsigned char)185;
int zero = 0;
int var_18 = -1144603604;
short var_19 = (short)4393;
unsigned char var_20 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
