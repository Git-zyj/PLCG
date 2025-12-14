#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41677;
unsigned long long int var_1 = 9659171519802564643ULL;
unsigned short var_3 = (unsigned short)38122;
int var_4 = 573492534;
unsigned char var_9 = (unsigned char)54;
signed char var_10 = (signed char)-119;
unsigned short var_11 = (unsigned short)63235;
unsigned short var_12 = (unsigned short)43086;
int zero = 0;
long long int var_13 = 7991883081409599596LL;
unsigned char var_14 = (unsigned char)120;
unsigned long long int var_15 = 1712045617599976579ULL;
void init() {
}

void checksum() {
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
