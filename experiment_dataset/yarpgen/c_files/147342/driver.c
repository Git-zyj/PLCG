#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30527;
unsigned int var_2 = 4277203863U;
signed char var_6 = (signed char)119;
unsigned char var_10 = (unsigned char)1;
int var_12 = -1950737720;
signed char var_13 = (signed char)97;
int zero = 0;
long long int var_16 = -9087496930282994892LL;
unsigned long long int var_17 = 14081407014817227007ULL;
unsigned long long int var_18 = 10724045503982791129ULL;
void init() {
}

void checksum() {
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
