#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 957831192;
int var_2 = -468197096;
int var_3 = -954463870;
int var_4 = 1086566031;
int var_5 = 1629843825;
int var_6 = -1181016372;
int var_7 = -144529199;
int var_8 = 2095362540;
int var_9 = 37733518;
int var_11 = -1394885731;
int zero = 0;
int var_12 = 1527340779;
int var_13 = -1270622501;
int var_14 = -264618774;
int var_15 = 279510146;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
