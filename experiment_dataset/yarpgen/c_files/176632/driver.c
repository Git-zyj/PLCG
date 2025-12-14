#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5251582465540305002LL;
unsigned int var_5 = 2215740856U;
long long int var_6 = 8676852908854846279LL;
unsigned char var_7 = (unsigned char)187;
long long int var_12 = -4151583355847680950LL;
unsigned short var_15 = (unsigned short)21764;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
short var_18 = (short)-20910;
long long int var_19 = 8707530366300054944LL;
short var_20 = (short)-19642;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
