#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
short var_4 = (short)5984;
unsigned long long int var_5 = 17930396430628445693ULL;
short var_9 = (short)20545;
int zero = 0;
unsigned int var_18 = 1958230460U;
unsigned char var_19 = (unsigned char)56;
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
