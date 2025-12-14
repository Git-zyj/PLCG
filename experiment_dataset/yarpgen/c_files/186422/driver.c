#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10954639079517463198ULL;
unsigned short var_1 = (unsigned short)5685;
int var_3 = 131206965;
unsigned int var_11 = 2446842134U;
unsigned char var_14 = (unsigned char)144;
int zero = 0;
unsigned short var_16 = (unsigned short)42966;
unsigned int var_17 = 3646864363U;
long long int var_18 = -2742659480221934848LL;
unsigned int var_19 = 360424308U;
unsigned short var_20 = (unsigned short)31429;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
