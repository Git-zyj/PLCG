#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 224912527;
unsigned short var_14 = (unsigned short)64963;
int zero = 0;
int var_20 = 1336562253;
unsigned long long int var_21 = 13121912358361437263ULL;
unsigned int var_22 = 3389927461U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
