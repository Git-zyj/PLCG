#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2065054361;
unsigned long long int var_4 = 18442178020871976586ULL;
unsigned char var_5 = (unsigned char)149;
unsigned long long int var_7 = 5632088324846092833ULL;
short var_8 = (short)16494;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1658520859;
short var_12 = (short)-7164;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
