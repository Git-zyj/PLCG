#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1684692282082233214LL;
int zero = 0;
int var_11 = -1171642447;
long long int var_12 = 8262574965173775102LL;
unsigned char var_13 = (unsigned char)97;
long long int var_14 = 5760665184028436255LL;
long long int var_15 = 126967005711634293LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
