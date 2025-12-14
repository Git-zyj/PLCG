#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
short var_3 = (short)21556;
unsigned int var_5 = 2471132241U;
int var_6 = 481172041;
unsigned char var_7 = (unsigned char)138;
short var_8 = (short)13031;
signed char var_9 = (signed char)-75;
int var_12 = 1425164737;
unsigned char var_13 = (unsigned char)75;
unsigned short var_14 = (unsigned short)16327;
int zero = 0;
short var_15 = (short)1371;
unsigned char var_16 = (unsigned char)125;
unsigned char var_17 = (unsigned char)197;
void init() {
}

void checksum() {
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
