#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1903390280U;
unsigned int var_9 = 40755683U;
unsigned int var_14 = 2469821965U;
signed char var_16 = (signed char)123;
int zero = 0;
unsigned int var_19 = 1698274926U;
unsigned int var_20 = 1461943300U;
unsigned long long int var_21 = 9637898327660709539ULL;
unsigned short var_22 = (unsigned short)56382;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
