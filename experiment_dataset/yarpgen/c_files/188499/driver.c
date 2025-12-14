#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned short var_5 = (unsigned short)37756;
int var_6 = 1797241800;
unsigned char var_14 = (unsigned char)217;
unsigned char var_15 = (unsigned char)33;
long long int var_16 = -6682965945999436411LL;
int zero = 0;
unsigned short var_18 = (unsigned short)57396;
long long int var_19 = 225347408057525443LL;
unsigned short var_20 = (unsigned short)64517;
void init() {
}

void checksum() {
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
