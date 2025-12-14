#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7514;
signed char var_6 = (signed char)-59;
long long int var_8 = 1549051100618139975LL;
int zero = 0;
unsigned char var_10 = (unsigned char)210;
signed char var_11 = (signed char)44;
unsigned short var_12 = (unsigned short)55017;
unsigned long long int var_13 = 636967051025082851ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
