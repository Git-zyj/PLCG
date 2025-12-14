#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3013681698586223559LL;
unsigned short var_6 = (unsigned short)54378;
long long int var_7 = 6523105346016607922LL;
long long int var_11 = 5108540088285272243LL;
int zero = 0;
unsigned long long int var_13 = 18394234726001658069ULL;
signed char var_14 = (signed char)-62;
unsigned short var_15 = (unsigned short)31406;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
