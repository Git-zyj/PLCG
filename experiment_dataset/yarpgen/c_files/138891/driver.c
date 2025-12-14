#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -643909117760267819LL;
signed char var_9 = (signed char)-25;
signed char var_10 = (signed char)-71;
unsigned long long int var_16 = 2330703748403995970ULL;
int zero = 0;
signed char var_19 = (signed char)-22;
int var_20 = -785882849;
void init() {
}

void checksum() {
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
