#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned short var_2 = (unsigned short)59868;
short var_4 = (short)-3027;
unsigned long long int var_7 = 8130633412258563377ULL;
short var_9 = (short)-18992;
int zero = 0;
unsigned short var_10 = (unsigned short)56480;
unsigned long long int var_11 = 12495553849798961152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
