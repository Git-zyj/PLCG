#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
int var_4 = -1593853659;
signed char var_8 = (signed char)-22;
unsigned int var_9 = 1403937291U;
unsigned char var_11 = (unsigned char)89;
unsigned char var_12 = (unsigned char)41;
int zero = 0;
unsigned char var_13 = (unsigned char)178;
int var_14 = -688274732;
void init() {
}

void checksum() {
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
