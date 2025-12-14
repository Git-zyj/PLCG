#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1586850833;
unsigned short var_4 = (unsigned short)31937;
short var_5 = (short)-14727;
int var_8 = -636754452;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-39;
unsigned short var_13 = (unsigned short)28382;
unsigned long long int var_14 = 1589235622867030741ULL;
signed char var_15 = (signed char)17;
unsigned long long int var_16 = 8363001066956882172ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
