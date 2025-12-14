#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2017417475;
unsigned short var_1 = (unsigned short)56520;
signed char var_8 = (signed char)89;
unsigned short var_9 = (unsigned short)58774;
signed char var_10 = (signed char)-122;
unsigned char var_11 = (unsigned char)238;
long long int var_12 = -7715360837412537827LL;
int var_15 = 995998046;
int zero = 0;
unsigned short var_19 = (unsigned short)63395;
short var_20 = (short)32763;
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
