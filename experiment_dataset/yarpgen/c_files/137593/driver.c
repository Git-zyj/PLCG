#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57862;
int var_4 = -663719441;
unsigned long long int var_9 = 6254626593601553708ULL;
int var_14 = 744085479;
int zero = 0;
short var_18 = (short)12884;
int var_19 = -1390031721;
int var_20 = -1671335049;
unsigned int var_21 = 900581026U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
