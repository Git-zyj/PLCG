#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-17668;
signed char var_9 = (signed char)-18;
long long int var_10 = -541397947240862408LL;
int zero = 0;
long long int var_11 = -1547626223419564301LL;
short var_12 = (short)-12411;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
