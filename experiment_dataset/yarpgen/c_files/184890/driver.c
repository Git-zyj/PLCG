#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18121318314272132170ULL;
short var_2 = (short)-14000;
unsigned int var_11 = 449007450U;
unsigned int var_13 = 3956744829U;
short var_16 = (short)5577;
int zero = 0;
unsigned int var_18 = 3444515973U;
unsigned char var_19 = (unsigned char)195;
short var_20 = (short)-18769;
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
