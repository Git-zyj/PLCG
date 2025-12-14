#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
unsigned long long int var_7 = 6405227339095455216ULL;
unsigned char var_8 = (unsigned char)46;
long long int var_11 = -1311544050063575674LL;
short var_12 = (short)26666;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-13941;
unsigned long long int var_16 = 13807128308986300838ULL;
int var_17 = -1931422801;
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
