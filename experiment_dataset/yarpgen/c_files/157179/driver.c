#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)927;
int var_2 = -174783376;
int var_3 = 1582269439;
int var_4 = 1500198592;
unsigned char var_5 = (unsigned char)235;
unsigned int var_6 = 1365993334U;
short var_7 = (short)-14671;
unsigned char var_8 = (unsigned char)110;
short var_12 = (short)27521;
unsigned char var_13 = (unsigned char)85;
unsigned short var_14 = (unsigned short)60504;
int zero = 0;
unsigned char var_15 = (unsigned char)163;
unsigned char var_16 = (unsigned char)34;
signed char var_17 = (signed char)98;
short var_18 = (short)14011;
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
