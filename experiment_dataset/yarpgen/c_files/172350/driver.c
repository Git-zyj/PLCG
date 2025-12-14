#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7055319359974962932ULL;
unsigned short var_4 = (unsigned short)50402;
long long int var_10 = -5540620654092899252LL;
int zero = 0;
unsigned long long int var_17 = 13287678631371793632ULL;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
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
