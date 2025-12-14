#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 19905227U;
int var_6 = -1840753285;
unsigned long long int var_9 = 8914956896151920358ULL;
signed char var_12 = (signed char)-115;
signed char var_13 = (signed char)-103;
unsigned char var_16 = (unsigned char)50;
int var_18 = 1814028591;
int zero = 0;
unsigned int var_20 = 2791941826U;
unsigned short var_21 = (unsigned short)25135;
unsigned long long int var_22 = 3812281363756092747ULL;
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
