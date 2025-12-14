#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31254;
unsigned long long int var_6 = 1389890947212775833ULL;
unsigned short var_7 = (unsigned short)62486;
long long int var_8 = -5932967408358758952LL;
long long int var_10 = -9202441792201335471LL;
unsigned long long int var_11 = 7558005155064483739ULL;
int zero = 0;
long long int var_15 = 1198391663296754117LL;
signed char var_16 = (signed char)22;
void init() {
}

void checksum() {
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
