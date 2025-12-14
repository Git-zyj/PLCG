#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-45;
signed char var_5 = (signed char)-3;
int var_9 = -57297232;
int var_15 = -1053508186;
int zero = 0;
signed char var_18 = (signed char)28;
unsigned long long int var_19 = 16872091512697993767ULL;
unsigned short var_20 = (unsigned short)10469;
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
