#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4423774155487416875ULL;
unsigned long long int var_3 = 4152584373242232232ULL;
unsigned long long int var_4 = 6745732765766919683ULL;
long long int var_6 = -8009383495028062956LL;
int var_9 = -1583412018;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
long long int var_13 = 174345979500205821LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
