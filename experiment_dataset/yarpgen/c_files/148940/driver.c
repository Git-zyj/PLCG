#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31590;
unsigned int var_2 = 1010099754U;
unsigned int var_4 = 4081924841U;
long long int var_7 = 3877713521792287250LL;
unsigned int var_12 = 203143345U;
unsigned short var_15 = (unsigned short)18127;
signed char var_19 = (signed char)-46;
int zero = 0;
short var_20 = (short)-32156;
unsigned int var_21 = 2968308437U;
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
