#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1073737148U;
unsigned long long int var_7 = 8269029563623513710ULL;
long long int var_9 = -3341597863989280429LL;
int zero = 0;
short var_16 = (short)16114;
long long int var_17 = -1233946234828706513LL;
unsigned long long int var_18 = 14029602838375829159ULL;
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
