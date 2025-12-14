#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
unsigned char var_2 = (unsigned char)223;
unsigned char var_3 = (unsigned char)128;
unsigned char var_8 = (unsigned char)236;
signed char var_9 = (signed char)28;
int var_12 = 644083998;
int var_13 = 1913575233;
int zero = 0;
signed char var_15 = (signed char)-39;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)10;
unsigned char var_18 = (unsigned char)90;
unsigned long long int var_19 = 10991175484338061436ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
