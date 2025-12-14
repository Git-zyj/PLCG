#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
long long int var_6 = 7417530595369528828LL;
unsigned long long int var_8 = 2850719913336760411ULL;
short var_16 = (short)15510;
int zero = 0;
int var_17 = 1059851163;
short var_18 = (short)22150;
long long int var_19 = 6975536909649012112LL;
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
