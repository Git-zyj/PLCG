#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned long long int var_4 = 6399155510539345072ULL;
unsigned char var_5 = (unsigned char)34;
unsigned char var_6 = (unsigned char)248;
unsigned short var_7 = (unsigned short)23589;
unsigned long long int var_11 = 10370872785184926530ULL;
unsigned long long int var_12 = 17402001382368414891ULL;
long long int var_16 = -3643681504000284156LL;
unsigned char var_17 = (unsigned char)215;
int zero = 0;
signed char var_19 = (signed char)50;
unsigned char var_20 = (unsigned char)221;
short var_21 = (short)-4114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
