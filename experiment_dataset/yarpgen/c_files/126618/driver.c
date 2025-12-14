#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17527;
short var_1 = (short)-19917;
unsigned int var_2 = 3586547330U;
unsigned long long int var_7 = 16311499214479161101ULL;
unsigned int var_8 = 3251925980U;
unsigned char var_9 = (unsigned char)251;
unsigned long long int var_10 = 5356869170253193405ULL;
unsigned long long int var_12 = 603423504865424510ULL;
unsigned int var_13 = 1267754789U;
unsigned char var_14 = (unsigned char)89;
int zero = 0;
unsigned short var_17 = (unsigned short)40735;
short var_18 = (short)-31992;
void init() {
}

void checksum() {
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
