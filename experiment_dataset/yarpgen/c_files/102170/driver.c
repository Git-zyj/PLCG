#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
unsigned long long int var_1 = 154207352811336859ULL;
unsigned long long int var_7 = 658475182840087648ULL;
short var_8 = (short)-1150;
short var_12 = (short)29874;
int zero = 0;
unsigned short var_15 = (unsigned short)50509;
int var_16 = -278994365;
signed char var_17 = (signed char)-110;
unsigned long long int var_18 = 1661361692776187222ULL;
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
