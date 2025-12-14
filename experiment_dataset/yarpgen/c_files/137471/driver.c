#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21257;
signed char var_2 = (signed char)-18;
unsigned long long int var_4 = 1739662483343090412ULL;
short var_6 = (short)-11798;
long long int var_9 = 5003487131501518152LL;
short var_11 = (short)6783;
int zero = 0;
short var_13 = (short)23292;
unsigned long long int var_14 = 10524935286277431614ULL;
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
