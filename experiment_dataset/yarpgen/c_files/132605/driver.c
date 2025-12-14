#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3004;
unsigned short var_4 = (unsigned short)30588;
int var_5 = -1795792912;
signed char var_7 = (signed char)-39;
unsigned char var_8 = (unsigned char)63;
unsigned char var_9 = (unsigned char)147;
int var_10 = 1981993734;
unsigned long long int var_11 = 2309227613087130698ULL;
int var_12 = -1099076859;
signed char var_13 = (signed char)14;
signed char var_17 = (signed char)-78;
unsigned long long int var_18 = 14693778250682290996ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)22107;
unsigned short var_20 = (unsigned short)37730;
signed char var_21 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
