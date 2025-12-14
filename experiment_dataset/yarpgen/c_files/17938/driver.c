#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21623;
unsigned char var_1 = (unsigned char)99;
int var_3 = -269677966;
unsigned long long int var_5 = 17806290143727017844ULL;
short var_6 = (short)20363;
unsigned short var_7 = (unsigned short)19553;
unsigned int var_8 = 73465475U;
unsigned short var_10 = (unsigned short)21819;
signed char var_11 = (signed char)76;
signed char var_12 = (signed char)53;
int zero = 0;
signed char var_13 = (signed char)43;
unsigned short var_14 = (unsigned short)14489;
unsigned short var_15 = (unsigned short)15035;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
