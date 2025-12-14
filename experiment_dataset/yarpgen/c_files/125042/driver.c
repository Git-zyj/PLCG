#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2624226926131231995LL;
unsigned long long int var_2 = 15024179354950035920ULL;
unsigned short var_5 = (unsigned short)31939;
signed char var_8 = (signed char)-62;
unsigned char var_9 = (unsigned char)75;
signed char var_11 = (signed char)74;
unsigned short var_13 = (unsigned short)56445;
int zero = 0;
unsigned char var_14 = (unsigned char)0;
unsigned short var_15 = (unsigned short)15611;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
