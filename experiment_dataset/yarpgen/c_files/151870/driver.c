#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)37;
long long int var_6 = -1792945761856299065LL;
short var_7 = (short)-905;
signed char var_9 = (signed char)8;
_Bool var_12 = (_Bool)0;
short var_13 = (short)20944;
int zero = 0;
unsigned long long int var_14 = 1449094346546771680ULL;
short var_15 = (short)12122;
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
