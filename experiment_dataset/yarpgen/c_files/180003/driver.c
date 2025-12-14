#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1085179388U;
long long int var_7 = -3080709703096304671LL;
signed char var_8 = (signed char)-79;
unsigned short var_9 = (unsigned short)30227;
long long int var_12 = -2929246279429760707LL;
int zero = 0;
unsigned long long int var_15 = 15255996509078796436ULL;
short var_16 = (short)-5704;
short var_17 = (short)-16062;
long long int var_18 = 8379678947967795955LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
