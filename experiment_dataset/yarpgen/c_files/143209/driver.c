#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)18;
unsigned short var_5 = (unsigned short)28584;
unsigned long long int var_12 = 2563705404892387499ULL;
unsigned long long int var_14 = 1063026736496312671ULL;
signed char var_17 = (signed char)65;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -852007034;
unsigned short var_21 = (unsigned short)43053;
short var_22 = (short)5162;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
