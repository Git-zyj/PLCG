#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-53;
unsigned short var_6 = (unsigned short)3066;
signed char var_8 = (signed char)-22;
int var_17 = 793788994;
int zero = 0;
short var_19 = (short)32109;
long long int var_20 = -4649031528106706110LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
