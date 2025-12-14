#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3601561928U;
signed char var_2 = (signed char)-22;
unsigned int var_19 = 716071493U;
int zero = 0;
unsigned short var_20 = (unsigned short)41292;
long long int var_21 = 5246043755353483485LL;
void init() {
}

void checksum() {
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
