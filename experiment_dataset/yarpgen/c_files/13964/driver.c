#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19216;
long long int var_1 = -2197514219399750323LL;
long long int var_7 = -4230837675884612733LL;
unsigned short var_8 = (unsigned short)30317;
signed char var_9 = (signed char)38;
int zero = 0;
signed char var_14 = (signed char)-48;
int var_15 = 1181024434;
short var_16 = (short)20093;
short var_17 = (short)19673;
int var_18 = 668054997;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
