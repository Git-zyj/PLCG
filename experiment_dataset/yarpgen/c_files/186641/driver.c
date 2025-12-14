#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1912691251U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)27;
signed char var_3 = (signed char)-73;
unsigned long long int var_5 = 3822003381445950587ULL;
long long int var_6 = -8531857255987214628LL;
unsigned int var_7 = 2592345358U;
int var_11 = -865950332;
short var_12 = (short)16793;
long long int var_14 = 3418257741876582910LL;
int zero = 0;
unsigned char var_15 = (unsigned char)31;
unsigned int var_16 = 3010373082U;
signed char var_17 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
