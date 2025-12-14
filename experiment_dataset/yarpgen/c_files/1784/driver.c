#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned char var_1 = (unsigned char)149;
short var_2 = (short)19386;
unsigned char var_3 = (unsigned char)225;
short var_4 = (short)-9802;
unsigned char var_5 = (unsigned char)45;
unsigned char var_6 = (unsigned char)209;
unsigned char var_7 = (unsigned char)127;
short var_8 = (short)-571;
unsigned char var_9 = (unsigned char)189;
int zero = 0;
unsigned char var_10 = (unsigned char)121;
unsigned char var_11 = (unsigned char)9;
short var_12 = (short)4045;
short var_13 = (short)29547;
short var_14 = (short)9143;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
