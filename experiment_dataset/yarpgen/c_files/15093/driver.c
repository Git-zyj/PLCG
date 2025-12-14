#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8234176014324093901ULL;
short var_1 = (short)19383;
long long int var_9 = -684088815571180272LL;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
signed char var_12 = (signed char)112;
unsigned short var_13 = (unsigned short)37933;
unsigned short var_14 = (unsigned short)49527;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
