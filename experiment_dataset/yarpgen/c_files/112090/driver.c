#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned short var_2 = (unsigned short)63269;
unsigned char var_4 = (unsigned char)183;
short var_8 = (short)18627;
short var_9 = (short)23977;
unsigned char var_11 = (unsigned char)59;
int var_13 = -1577039868;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
short var_15 = (short)-893;
unsigned short var_16 = (unsigned short)57861;
unsigned short var_17 = (unsigned short)63402;
signed char var_18 = (signed char)-21;
unsigned char var_19 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
