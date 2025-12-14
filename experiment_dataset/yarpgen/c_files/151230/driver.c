#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -746183951;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 12235853156105962930ULL;
unsigned char var_9 = (unsigned char)133;
int var_11 = -1867566301;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-113;
unsigned long long int var_17 = 2528962632020401670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
