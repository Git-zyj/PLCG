#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15081;
unsigned short var_1 = (unsigned short)18261;
unsigned short var_2 = (unsigned short)46913;
long long int var_6 = 5408740747733242317LL;
unsigned int var_9 = 736296638U;
short var_12 = (short)2997;
unsigned int var_17 = 1052421155U;
int zero = 0;
signed char var_18 = (signed char)-66;
signed char var_19 = (signed char)77;
short var_20 = (short)5602;
unsigned long long int var_21 = 4687136576465150971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
