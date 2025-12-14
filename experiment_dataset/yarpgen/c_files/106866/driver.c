#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9921355314698404371ULL;
unsigned short var_8 = (unsigned short)55496;
signed char var_9 = (signed char)-104;
unsigned int var_14 = 3050870210U;
unsigned short var_16 = (unsigned short)655;
int zero = 0;
unsigned long long int var_17 = 5251565642409646496ULL;
unsigned long long int var_18 = 4779307694401197977ULL;
unsigned char var_19 = (unsigned char)215;
void init() {
}

void checksum() {
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
