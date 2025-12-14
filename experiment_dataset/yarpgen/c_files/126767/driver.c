#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -676803950;
signed char var_4 = (signed char)-22;
unsigned char var_5 = (unsigned char)216;
unsigned char var_6 = (unsigned char)5;
_Bool var_7 = (_Bool)0;
short var_12 = (short)2325;
int var_15 = 1480414408;
unsigned char var_17 = (unsigned char)72;
int var_18 = -91380358;
short var_19 = (short)-29719;
int zero = 0;
unsigned char var_20 = (unsigned char)189;
unsigned char var_21 = (unsigned char)106;
unsigned char var_22 = (unsigned char)72;
signed char var_23 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
