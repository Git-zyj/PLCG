#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4241569967651625135ULL;
long long int var_1 = 825224529972286046LL;
int var_5 = 1386021644;
unsigned short var_6 = (unsigned short)31571;
long long int var_7 = 1720743557836987597LL;
unsigned long long int var_9 = 4150592309056113565ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)50200;
long long int var_15 = 4533273134964921414LL;
unsigned short var_16 = (unsigned short)35292;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
