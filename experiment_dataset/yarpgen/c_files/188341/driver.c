#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 462634798U;
unsigned long long int var_4 = 17215266942576648977ULL;
unsigned long long int var_5 = 12333555146620022805ULL;
unsigned int var_8 = 2853936263U;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 403012401U;
int zero = 0;
signed char var_14 = (signed char)-116;
int var_15 = 1563075147;
unsigned char var_16 = (unsigned char)193;
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
