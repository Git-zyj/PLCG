#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32728;
short var_2 = (short)1719;
long long int var_4 = 3383620612785738460LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)4689;
unsigned char var_8 = (unsigned char)129;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3790898634U;
short var_16 = (short)-10966;
unsigned char var_17 = (unsigned char)183;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
