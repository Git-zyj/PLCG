#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)72;
unsigned long long int var_3 = 1648144857088171468ULL;
short var_6 = (short)13522;
unsigned char var_10 = (unsigned char)251;
int var_16 = -1872942709;
int var_17 = 1083256379;
long long int var_18 = -8505173513335763800LL;
int zero = 0;
unsigned long long int var_19 = 18408147739760196834ULL;
_Bool var_20 = (_Bool)1;
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
