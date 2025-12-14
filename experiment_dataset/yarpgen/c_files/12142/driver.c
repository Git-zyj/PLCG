#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5934387045656496017ULL;
unsigned short var_11 = (unsigned short)47267;
int zero = 0;
unsigned short var_17 = (unsigned short)28330;
unsigned long long int var_18 = 11868682528367660475ULL;
unsigned short var_19 = (unsigned short)39101;
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
