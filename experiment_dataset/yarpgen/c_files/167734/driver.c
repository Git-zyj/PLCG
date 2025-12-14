#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1327159086;
long long int var_3 = -8401974412571271902LL;
int var_4 = 573916674;
int var_7 = -1546427069;
int var_8 = 598170647;
int var_9 = 52131324;
long long int var_11 = 2274060597861293742LL;
int zero = 0;
unsigned int var_14 = 1742249598U;
long long int var_15 = -4145625962550749207LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
