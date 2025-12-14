#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1067294344;
unsigned long long int var_3 = 2633284549454107164ULL;
short var_4 = (short)7951;
unsigned int var_5 = 2204584927U;
unsigned long long int var_6 = 12068387373092333319ULL;
unsigned short var_9 = (unsigned short)44824;
short var_13 = (short)-3391;
int zero = 0;
int var_14 = 1734600158;
unsigned short var_15 = (unsigned short)58890;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
