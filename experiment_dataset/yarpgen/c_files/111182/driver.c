#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)18;
long long int var_11 = -7321030711612289457LL;
signed char var_14 = (signed char)-76;
int zero = 0;
signed char var_15 = (signed char)-33;
unsigned short var_16 = (unsigned short)35095;
long long int var_17 = -2274282079767288820LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
