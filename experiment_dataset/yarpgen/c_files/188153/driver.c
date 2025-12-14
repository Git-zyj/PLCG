#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14340649237155253806ULL;
signed char var_1 = (signed char)65;
unsigned long long int var_3 = 13668000248951241469ULL;
unsigned int var_6 = 1479830753U;
unsigned long long int var_11 = 17360053541613530589ULL;
int zero = 0;
unsigned long long int var_12 = 10347104177069379535ULL;
long long int var_13 = -1527781351292007264LL;
unsigned char var_14 = (unsigned char)95;
unsigned long long int var_15 = 6028417612394293652ULL;
int var_16 = -2138507374;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
