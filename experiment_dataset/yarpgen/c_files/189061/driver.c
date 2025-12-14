#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 641546743;
long long int var_4 = -9032199748415849651LL;
short var_5 = (short)-24514;
long long int var_6 = -1231482354316047159LL;
int var_8 = 465211543;
short var_10 = (short)-20958;
unsigned char var_11 = (unsigned char)123;
unsigned char var_12 = (unsigned char)195;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)78;
int var_15 = -1259526663;
signed char var_16 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
