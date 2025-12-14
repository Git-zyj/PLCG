#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2634515249U;
unsigned long long int var_7 = 5617419565399733897ULL;
unsigned long long int var_8 = 14306512816598052599ULL;
unsigned long long int var_9 = 14818178279624361912ULL;
short var_11 = (short)16008;
unsigned long long int var_13 = 9707249218678614450ULL;
int zero = 0;
unsigned int var_18 = 720738265U;
unsigned int var_19 = 1670593275U;
signed char var_20 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
