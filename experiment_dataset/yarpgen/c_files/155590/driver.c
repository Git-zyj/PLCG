#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)141;
long long int var_4 = -1595700763466900889LL;
short var_5 = (short)25510;
unsigned short var_6 = (unsigned short)168;
unsigned long long int var_7 = 640154251982894856ULL;
int zero = 0;
unsigned int var_10 = 19043459U;
unsigned long long int var_11 = 14063493192517258723ULL;
unsigned int var_12 = 4236425663U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
