#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7102889507007621685LL;
long long int var_1 = -5214775694496480931LL;
long long int var_3 = 520330932579773051LL;
unsigned char var_4 = (unsigned char)101;
unsigned int var_8 = 3780419486U;
int zero = 0;
long long int var_10 = 4768865894926843371LL;
unsigned int var_11 = 1792410468U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
