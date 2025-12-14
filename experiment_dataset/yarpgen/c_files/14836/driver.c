#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12891;
unsigned long long int var_3 = 6117757634177366764ULL;
unsigned long long int var_4 = 501490076036318816ULL;
signed char var_5 = (signed char)-45;
unsigned short var_7 = (unsigned short)11720;
short var_8 = (short)30499;
unsigned long long int var_9 = 7445893580078976426ULL;
unsigned long long int var_11 = 10098413244710285243ULL;
int zero = 0;
signed char var_12 = (signed char)-92;
long long int var_13 = 8892835128278990025LL;
signed char var_14 = (signed char)-25;
void init() {
}

void checksum() {
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
