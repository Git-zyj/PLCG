#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5211359663183359282LL;
unsigned short var_4 = (unsigned short)14735;
long long int var_5 = 5949841280608254619LL;
int var_8 = -1595207499;
unsigned long long int var_9 = 15895981578999396304ULL;
short var_13 = (short)12913;
int zero = 0;
signed char var_14 = (signed char)-121;
int var_15 = 277977609;
unsigned char var_16 = (unsigned char)127;
void init() {
}

void checksum() {
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
