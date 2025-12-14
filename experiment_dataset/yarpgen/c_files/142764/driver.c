#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
signed char var_6 = (signed char)112;
unsigned char var_9 = (unsigned char)122;
long long int var_14 = 7725556693103249845LL;
int var_15 = -172422554;
int var_16 = 1973900415;
int var_17 = 1282143045;
short var_19 = (short)15328;
int zero = 0;
int var_20 = 640303464;
short var_21 = (short)1102;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
