#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19138;
_Bool var_1 = (_Bool)0;
long long int var_2 = 6881409248725472285LL;
int var_3 = -961427727;
unsigned char var_4 = (unsigned char)217;
unsigned long long int var_5 = 1049277634933674139ULL;
unsigned short var_6 = (unsigned short)30226;
short var_9 = (short)-18620;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58776;
short var_14 = (short)3379;
unsigned char var_16 = (unsigned char)129;
int zero = 0;
unsigned long long int var_17 = 3901286449328300864ULL;
short var_18 = (short)-23317;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)55419;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
