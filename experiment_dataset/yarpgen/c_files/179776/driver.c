#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2187653627U;
long long int var_7 = 848278119673483024LL;
unsigned long long int var_9 = 2446298015681719805ULL;
long long int var_10 = -589060723928493940LL;
unsigned char var_11 = (unsigned char)235;
unsigned char var_12 = (unsigned char)194;
int zero = 0;
int var_13 = 1363338774;
unsigned int var_14 = 3398836126U;
unsigned int var_15 = 103581098U;
unsigned char var_16 = (unsigned char)97;
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
