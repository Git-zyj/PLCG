#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1500100470;
long long int var_2 = 7280014398271628850LL;
unsigned short var_3 = (unsigned short)41902;
unsigned short var_5 = (unsigned short)10212;
short var_8 = (short)13458;
int var_14 = -1176165264;
short var_15 = (short)-32570;
int zero = 0;
int var_16 = -1864914188;
unsigned char var_17 = (unsigned char)110;
signed char var_18 = (signed char)-105;
unsigned int var_19 = 3044103559U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
