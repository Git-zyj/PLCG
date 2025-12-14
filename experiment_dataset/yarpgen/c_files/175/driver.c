#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned long long int var_9 = 2006130947810176696ULL;
unsigned int var_10 = 3603547413U;
signed char var_11 = (signed char)82;
int zero = 0;
signed char var_18 = (signed char)-70;
unsigned char var_19 = (unsigned char)246;
short var_20 = (short)-25280;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
