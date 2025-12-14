#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6454594994732136356LL;
unsigned short var_4 = (unsigned short)31401;
long long int var_5 = -4304717960288794887LL;
unsigned int var_6 = 968948055U;
unsigned int var_7 = 3322126026U;
unsigned int var_8 = 1423083248U;
short var_9 = (short)-23013;
int var_10 = 213798469;
int zero = 0;
unsigned char var_12 = (unsigned char)113;
unsigned int var_13 = 4270011931U;
long long int var_14 = 5592024190559374669LL;
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
