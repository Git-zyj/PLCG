#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)52543;
signed char var_7 = (signed char)124;
unsigned short var_8 = (unsigned short)44437;
long long int var_9 = -8662849017055691610LL;
unsigned short var_10 = (unsigned short)51115;
short var_12 = (short)-11117;
unsigned short var_14 = (unsigned short)19038;
int zero = 0;
unsigned char var_17 = (unsigned char)73;
int var_18 = -496788329;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
