#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4775897964981007256LL;
short var_8 = (short)-13261;
unsigned short var_10 = (unsigned short)954;
int zero = 0;
unsigned short var_16 = (unsigned short)4867;
long long int var_17 = -8645003739075348878LL;
void init() {
}

void checksum() {
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
