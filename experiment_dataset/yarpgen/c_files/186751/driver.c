#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3825;
unsigned long long int var_2 = 781203589492195187ULL;
signed char var_7 = (signed char)10;
int var_8 = 2129798403;
signed char var_9 = (signed char)61;
signed char var_12 = (signed char)2;
int var_13 = 196455071;
int zero = 0;
unsigned short var_15 = (unsigned short)6784;
unsigned long long int var_16 = 974338586531862863ULL;
unsigned int var_17 = 3069939264U;
unsigned long long int var_18 = 1759343135331853786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
