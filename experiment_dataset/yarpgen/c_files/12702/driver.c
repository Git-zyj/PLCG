#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61795;
unsigned short var_3 = (unsigned short)11427;
signed char var_4 = (signed char)-106;
unsigned short var_5 = (unsigned short)52455;
signed char var_6 = (signed char)35;
signed char var_9 = (signed char)77;
int zero = 0;
unsigned short var_11 = (unsigned short)7740;
unsigned short var_12 = (unsigned short)62110;
signed char var_13 = (signed char)126;
unsigned short var_14 = (unsigned short)59838;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
