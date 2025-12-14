#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6001553820678039140LL;
signed char var_4 = (signed char)-54;
long long int var_8 = -332518531997660843LL;
unsigned char var_11 = (unsigned char)244;
signed char var_16 = (signed char)38;
unsigned int var_19 = 407999302U;
int zero = 0;
short var_20 = (short)5160;
unsigned char var_21 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
