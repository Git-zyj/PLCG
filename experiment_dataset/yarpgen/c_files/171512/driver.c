#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5123282579398588701ULL;
unsigned int var_1 = 1956182516U;
unsigned long long int var_3 = 14292358863164464006ULL;
unsigned short var_6 = (unsigned short)13282;
long long int var_7 = -7860338315211744872LL;
unsigned long long int var_8 = 17501368666295000264ULL;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
unsigned long long int var_10 = 2830711369126146779ULL;
int var_11 = 685575985;
unsigned short var_12 = (unsigned short)9583;
unsigned char var_13 = (unsigned char)253;
int var_14 = 132722967;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
