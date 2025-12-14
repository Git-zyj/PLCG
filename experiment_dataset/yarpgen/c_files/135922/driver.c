#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -785132453135333901LL;
unsigned long long int var_7 = 4581713801745693991ULL;
short var_9 = (short)11523;
short var_14 = (short)6569;
int zero = 0;
signed char var_16 = (signed char)-126;
int var_17 = 963045647;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = 575413703387690595LL;
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
