#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned short var_4 = (unsigned short)55365;
int var_7 = -83376663;
signed char var_11 = (signed char)-4;
unsigned long long int var_13 = 14458661304880771331ULL;
int zero = 0;
signed char var_14 = (signed char)-109;
unsigned long long int var_15 = 6695697399843603755ULL;
signed char var_16 = (signed char)22;
void init() {
}

void checksum() {
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
