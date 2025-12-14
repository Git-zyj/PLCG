#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)186;
signed char var_2 = (signed char)114;
short var_5 = (short)2437;
unsigned int var_7 = 2391683563U;
unsigned char var_8 = (unsigned char)189;
unsigned short var_9 = (unsigned short)22315;
int var_10 = -776144784;
unsigned char var_12 = (unsigned char)106;
int var_13 = 334656780;
unsigned int var_14 = 2792152462U;
int zero = 0;
unsigned char var_15 = (unsigned char)107;
unsigned char var_16 = (unsigned char)16;
unsigned long long int var_17 = 4310458530106884916ULL;
short var_18 = (short)4429;
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
