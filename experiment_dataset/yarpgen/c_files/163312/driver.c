#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1904131085881360365ULL;
short var_13 = (short)30083;
int var_14 = -928837464;
unsigned short var_15 = (unsigned short)32187;
int zero = 0;
short var_16 = (short)-31097;
unsigned char var_17 = (unsigned char)222;
unsigned long long int var_18 = 14732540345684491092ULL;
signed char var_19 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
