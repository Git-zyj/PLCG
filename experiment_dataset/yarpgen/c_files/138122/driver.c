#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3677587729876441901ULL;
short var_4 = (short)-10999;
unsigned char var_7 = (unsigned char)182;
long long int var_8 = 8100929384596494090LL;
signed char var_9 = (signed char)89;
short var_10 = (short)14408;
unsigned long long int var_12 = 15189283663074324319ULL;
int zero = 0;
unsigned int var_18 = 1523953065U;
short var_19 = (short)-3406;
short var_20 = (short)-15608;
unsigned short var_21 = (unsigned short)4495;
unsigned int var_22 = 981399809U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
