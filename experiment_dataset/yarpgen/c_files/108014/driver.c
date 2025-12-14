#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1354056672U;
int var_2 = 360471554;
unsigned char var_3 = (unsigned char)45;
unsigned int var_6 = 1796687089U;
short var_8 = (short)3322;
unsigned char var_10 = (unsigned char)254;
unsigned char var_11 = (unsigned char)11;
unsigned long long int var_12 = 3510513881947326353ULL;
int zero = 0;
int var_17 = -2009486731;
unsigned long long int var_18 = 3368261034519077146ULL;
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
