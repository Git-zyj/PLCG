#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2339251757039579047ULL;
unsigned short var_1 = (unsigned short)19570;
unsigned char var_10 = (unsigned char)82;
unsigned char var_12 = (unsigned char)23;
unsigned short var_15 = (unsigned short)3753;
short var_16 = (short)-10466;
int zero = 0;
unsigned short var_18 = (unsigned short)20736;
long long int var_19 = -815149533498983873LL;
unsigned short var_20 = (unsigned short)13489;
short var_21 = (short)9496;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
