#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17377855601056655628ULL;
signed char var_9 = (signed char)-32;
unsigned long long int var_11 = 12283753016577915942ULL;
unsigned short var_14 = (unsigned short)17271;
unsigned int var_18 = 1638101283U;
unsigned short var_19 = (unsigned short)27892;
int zero = 0;
signed char var_20 = (signed char)121;
unsigned int var_21 = 3386983334U;
unsigned short var_22 = (unsigned short)1593;
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
