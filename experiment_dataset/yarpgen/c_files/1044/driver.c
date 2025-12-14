#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3060628203U;
short var_1 = (short)19021;
unsigned char var_2 = (unsigned char)205;
unsigned int var_3 = 2476343552U;
short var_4 = (short)-10235;
unsigned int var_5 = 3759124480U;
signed char var_6 = (signed char)107;
signed char var_7 = (signed char)53;
signed char var_8 = (signed char)-115;
unsigned long long int var_9 = 3370389796571294694ULL;
unsigned char var_10 = (unsigned char)55;
signed char var_11 = (signed char)-27;
int var_12 = 1587582782;
int zero = 0;
long long int var_13 = 6498102446690838157LL;
short var_14 = (short)17059;
signed char var_15 = (signed char)121;
unsigned int var_16 = 2459373466U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
