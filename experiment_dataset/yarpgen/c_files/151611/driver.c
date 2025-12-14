#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32712;
unsigned long long int var_3 = 5409004138028291487ULL;
unsigned long long int var_11 = 2672878489445558448ULL;
unsigned long long int var_12 = 12548898634343735526ULL;
short var_14 = (short)-2080;
int zero = 0;
short var_15 = (short)7608;
unsigned short var_16 = (unsigned short)55968;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
