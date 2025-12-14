#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_1 = (unsigned char)70;
signed char var_2 = (signed char)-23;
unsigned char var_4 = (unsigned char)52;
unsigned char var_5 = (unsigned char)77;
signed char var_6 = (signed char)-61;
unsigned long long int var_7 = 9435508759202917662ULL;
int var_8 = 1980387576;
unsigned int var_9 = 1274951211U;
int var_10 = -1419569364;
int zero = 0;
unsigned char var_12 = (unsigned char)31;
signed char var_13 = (signed char)13;
int var_14 = 1074329378;
unsigned long long int var_15 = 1302491753541660812ULL;
signed char var_16 = (signed char)-75;
int var_17 = -339655118;
unsigned long long int var_18 = 6844350030869039119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
