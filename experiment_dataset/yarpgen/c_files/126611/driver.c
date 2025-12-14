#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22832;
unsigned char var_3 = (unsigned char)30;
short var_4 = (short)-16095;
unsigned char var_6 = (unsigned char)116;
unsigned int var_8 = 4288190416U;
int var_9 = 1644336834;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
unsigned short var_13 = (unsigned short)18304;
long long int var_14 = 5452335512645853814LL;
short var_15 = (short)11283;
signed char var_16 = (signed char)-51;
signed char var_17 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
