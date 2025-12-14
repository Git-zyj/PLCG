#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6610934856182537301LL;
long long int var_3 = 1574638418826128950LL;
short var_4 = (short)-13134;
unsigned short var_12 = (unsigned short)56770;
int zero = 0;
short var_14 = (short)5591;
unsigned int var_15 = 1796485751U;
int var_16 = 497058705;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
