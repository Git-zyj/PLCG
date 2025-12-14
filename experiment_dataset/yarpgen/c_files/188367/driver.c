#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 426083286U;
long long int var_4 = -544868754292103054LL;
int var_5 = 565769286;
short var_10 = (short)-32116;
signed char var_11 = (signed char)-21;
unsigned long long int var_12 = 18335159076160339734ULL;
int zero = 0;
int var_13 = 648205672;
unsigned short var_14 = (unsigned short)43629;
void init() {
}

void checksum() {
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
