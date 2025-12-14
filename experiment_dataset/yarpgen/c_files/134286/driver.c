#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
signed char var_1 = (signed char)85;
unsigned long long int var_3 = 3936955654072295984ULL;
long long int var_7 = -4179140335823917764LL;
unsigned short var_8 = (unsigned short)34410;
unsigned char var_16 = (unsigned char)64;
int zero = 0;
short var_17 = (short)32232;
int var_18 = -1072947716;
void init() {
}

void checksum() {
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
