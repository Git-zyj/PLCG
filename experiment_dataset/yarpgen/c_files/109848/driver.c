#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
long long int var_1 = -2639810725448983067LL;
unsigned short var_2 = (unsigned short)18339;
unsigned char var_3 = (unsigned char)185;
short var_5 = (short)17727;
long long int var_6 = -8969590587566228775LL;
short var_7 = (short)-28143;
unsigned short var_8 = (unsigned short)32675;
unsigned char var_9 = (unsigned char)148;
short var_10 = (short)-31018;
unsigned char var_11 = (unsigned char)118;
unsigned char var_12 = (unsigned char)96;
long long int var_13 = 6084040052874353256LL;
long long int var_16 = 1233561816571167862LL;
int zero = 0;
unsigned char var_17 = (unsigned char)206;
long long int var_18 = 4243646263623403999LL;
long long int var_19 = 5440794164687970093LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
