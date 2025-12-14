#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1526631936;
int var_2 = 2131416317;
signed char var_3 = (signed char)-104;
signed char var_5 = (signed char)-118;
long long int var_7 = -270819988110492614LL;
signed char var_13 = (signed char)-35;
int zero = 0;
signed char var_14 = (signed char)87;
long long int var_15 = 1476848119432685761LL;
unsigned short var_16 = (unsigned short)25682;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
