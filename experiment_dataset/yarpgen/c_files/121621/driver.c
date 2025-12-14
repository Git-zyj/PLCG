#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
unsigned int var_2 = 3409769967U;
long long int var_3 = -2104805043013441189LL;
int var_4 = -117478637;
unsigned long long int var_6 = 14167808883862579266ULL;
unsigned long long int var_7 = 17992826297074849545ULL;
signed char var_8 = (signed char)-20;
long long int var_9 = -4985422780864157634LL;
int zero = 0;
unsigned long long int var_11 = 18335691636832668867ULL;
unsigned int var_12 = 3511594809U;
unsigned int var_13 = 4190827874U;
int var_14 = -2001013471;
void init() {
}

void checksum() {
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
