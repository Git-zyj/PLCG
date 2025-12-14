#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
long long int var_4 = -4067230581949205006LL;
unsigned char var_5 = (unsigned char)88;
unsigned long long int var_6 = 16042816845501849762ULL;
long long int var_7 = -3864808084536436516LL;
unsigned long long int var_8 = 11128434643434826007ULL;
unsigned long long int var_9 = 9856817323472524188ULL;
signed char var_10 = (signed char)74;
int zero = 0;
unsigned long long int var_12 = 1096575935153917829ULL;
unsigned char var_13 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
