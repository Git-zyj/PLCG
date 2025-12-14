#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3639412289836523032ULL;
int var_6 = -1413299094;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)78;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)64;
int var_17 = -804516685;
unsigned long long int var_18 = 5111094996162443404ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
