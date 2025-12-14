#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4201035932U;
unsigned long long int var_4 = 9090022591565323883ULL;
long long int var_10 = -2875428376991961151LL;
int zero = 0;
signed char var_12 = (signed char)-3;
unsigned short var_13 = (unsigned short)53958;
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
