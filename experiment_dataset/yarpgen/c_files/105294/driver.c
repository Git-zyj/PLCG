#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7663647933638940115ULL;
long long int var_2 = 7146995377508157877LL;
unsigned int var_9 = 3970686336U;
short var_15 = (short)27827;
unsigned short var_16 = (unsigned short)28092;
int zero = 0;
short var_17 = (short)11806;
signed char var_18 = (signed char)-98;
void init() {
}

void checksum() {
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
