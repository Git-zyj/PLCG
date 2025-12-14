#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1684424441767181912LL;
unsigned short var_3 = (unsigned short)11812;
long long int var_4 = 7591939136150540100LL;
unsigned short var_9 = (unsigned short)33779;
signed char var_10 = (signed char)-99;
long long int var_11 = 6150521961559740493LL;
unsigned char var_12 = (unsigned char)116;
unsigned int var_14 = 80003202U;
int zero = 0;
long long int var_16 = 175219969873098278LL;
unsigned int var_17 = 3895429980U;
unsigned int var_18 = 2885779904U;
unsigned short var_19 = (unsigned short)16004;
unsigned char var_20 = (unsigned char)228;
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
