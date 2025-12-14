#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned char var_1 = (unsigned char)58;
unsigned int var_2 = 2096165559U;
signed char var_4 = (signed char)-103;
unsigned char var_6 = (unsigned char)153;
long long int var_7 = -1610641334860006727LL;
unsigned int var_8 = 2500800033U;
unsigned char var_12 = (unsigned char)185;
unsigned int var_13 = 1439320112U;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
unsigned char var_15 = (unsigned char)251;
unsigned char var_16 = (unsigned char)249;
unsigned int var_17 = 2728740371U;
signed char var_18 = (signed char)89;
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
