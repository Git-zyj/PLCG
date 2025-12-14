#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
long long int var_5 = -5827689715912425495LL;
unsigned int var_8 = 49499132U;
int var_9 = -1237139316;
signed char var_13 = (signed char)-77;
signed char var_16 = (signed char)100;
int zero = 0;
int var_18 = -1098176872;
signed char var_19 = (signed char)19;
void init() {
}

void checksum() {
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
