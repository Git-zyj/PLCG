#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned short var_1 = (unsigned short)61125;
unsigned short var_2 = (unsigned short)14005;
short var_3 = (short)-14675;
long long int var_4 = 1675276543991894354LL;
signed char var_6 = (signed char)-63;
signed char var_7 = (signed char)19;
unsigned char var_8 = (unsigned char)224;
unsigned short var_10 = (unsigned short)18468;
signed char var_11 = (signed char)74;
int zero = 0;
int var_12 = -246690265;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)61854;
unsigned char var_15 = (unsigned char)1;
signed char var_16 = (signed char)32;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
