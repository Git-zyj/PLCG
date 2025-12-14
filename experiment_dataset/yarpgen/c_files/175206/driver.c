#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-210;
unsigned long long int var_1 = 9515395911555319479ULL;
unsigned short var_2 = (unsigned short)13680;
signed char var_4 = (signed char)22;
short var_5 = (short)-21800;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)63957;
unsigned int var_9 = 220662449U;
int var_12 = 2017978964;
int zero = 0;
short var_13 = (short)-2378;
signed char var_14 = (signed char)-26;
unsigned char var_15 = (unsigned char)170;
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
