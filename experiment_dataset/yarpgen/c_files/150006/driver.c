#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -503531377;
unsigned short var_2 = (unsigned short)24926;
long long int var_3 = -4924266000994685346LL;
unsigned long long int var_4 = 16559623012373233273ULL;
short var_5 = (short)-17294;
int var_6 = 2031546274;
unsigned long long int var_7 = 10162113239199801738ULL;
short var_9 = (short)18239;
int zero = 0;
signed char var_14 = (signed char)3;
int var_15 = -157747697;
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
