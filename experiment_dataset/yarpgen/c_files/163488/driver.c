#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7010942793098173130LL;
short var_1 = (short)-19884;
unsigned short var_5 = (unsigned short)15408;
unsigned char var_14 = (unsigned char)4;
long long int var_15 = -3001487107852911767LL;
short var_16 = (short)-11426;
int zero = 0;
signed char var_19 = (signed char)117;
signed char var_20 = (signed char)-45;
long long int var_21 = -4916864017009680059LL;
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
