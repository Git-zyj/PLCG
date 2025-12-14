#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3738880426860478200LL;
short var_2 = (short)17380;
signed char var_4 = (signed char)91;
unsigned long long int var_8 = 12769591896987153226ULL;
signed char var_9 = (signed char)40;
int zero = 0;
int var_12 = -1260047251;
long long int var_13 = -8139622049726993923LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
