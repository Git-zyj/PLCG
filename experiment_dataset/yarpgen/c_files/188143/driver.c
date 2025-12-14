#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7614;
unsigned char var_1 = (unsigned char)178;
int var_3 = 1359051168;
int var_5 = 1748299141;
signed char var_7 = (signed char)-54;
unsigned short var_11 = (unsigned short)44848;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)87;
short var_16 = (short)-8536;
short var_17 = (short)-12042;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
