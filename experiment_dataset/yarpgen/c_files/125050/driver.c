#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2028361613;
unsigned char var_1 = (unsigned char)242;
unsigned char var_2 = (unsigned char)160;
long long int var_3 = 270749538005414028LL;
signed char var_5 = (signed char)-15;
unsigned short var_7 = (unsigned short)55852;
unsigned long long int var_9 = 4316758216939729730ULL;
unsigned long long int var_10 = 10136798420124899750ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
unsigned long long int var_12 = 12694955043883006062ULL;
unsigned int var_13 = 2713571620U;
unsigned long long int var_14 = 6367907095579910029ULL;
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
