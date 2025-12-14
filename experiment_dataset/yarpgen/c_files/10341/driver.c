#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 40364454;
unsigned char var_5 = (unsigned char)221;
short var_9 = (short)30487;
unsigned long long int var_14 = 10495606354639780391ULL;
int zero = 0;
unsigned long long int var_17 = 267653536649107581ULL;
int var_18 = 674256529;
long long int var_19 = 1825211612400915941LL;
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
