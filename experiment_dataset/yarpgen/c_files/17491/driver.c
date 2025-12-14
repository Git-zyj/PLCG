#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
signed char var_1 = (signed char)-58;
long long int var_2 = -5086362063606344697LL;
unsigned char var_3 = (unsigned char)193;
long long int var_4 = -8461386795326594359LL;
unsigned char var_6 = (unsigned char)12;
int var_10 = -1731721216;
int zero = 0;
unsigned char var_15 = (unsigned char)128;
unsigned char var_16 = (unsigned char)82;
unsigned long long int var_17 = 1239899390380036860ULL;
long long int var_18 = 6839723871623208609LL;
unsigned char var_19 = (unsigned char)154;
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
