#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)164;
unsigned int var_6 = 2985879539U;
signed char var_7 = (signed char)-88;
signed char var_12 = (signed char)49;
long long int var_17 = -8227247669733643945LL;
int zero = 0;
short var_19 = (short)16516;
short var_20 = (short)-4264;
signed char var_21 = (signed char)9;
void init() {
}

void checksum() {
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
