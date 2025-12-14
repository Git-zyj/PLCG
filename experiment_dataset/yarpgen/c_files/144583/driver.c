#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2139630438;
signed char var_4 = (signed char)-98;
short var_5 = (short)29645;
signed char var_6 = (signed char)120;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_19 = (short)11577;
unsigned short var_20 = (unsigned short)29742;
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
