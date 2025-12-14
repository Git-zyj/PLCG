#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13493665890236550784ULL;
int var_6 = -317097282;
unsigned short var_7 = (unsigned short)15576;
unsigned long long int var_13 = 5852027738637546207ULL;
int zero = 0;
int var_14 = 2038897931;
unsigned short var_15 = (unsigned short)28482;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
