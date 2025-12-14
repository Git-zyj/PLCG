#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
unsigned short var_2 = (unsigned short)61148;
unsigned int var_5 = 2259783419U;
short var_7 = (short)-13228;
unsigned long long int var_8 = 7921114763507043274ULL;
short var_9 = (short)3752;
unsigned char var_14 = (unsigned char)180;
int zero = 0;
unsigned short var_16 = (unsigned short)31338;
short var_17 = (short)-5005;
short var_18 = (short)-12244;
void init() {
}

void checksum() {
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
