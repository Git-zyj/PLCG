#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13538022468778265412ULL;
unsigned char var_1 = (unsigned char)182;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)101;
int zero = 0;
short var_13 = (short)11629;
unsigned long long int var_14 = 7115710354125039123ULL;
long long int var_15 = -5847776103547321913LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
