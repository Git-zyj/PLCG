#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1615715168;
int var_3 = 244396420;
unsigned long long int var_10 = 13636368421175897943ULL;
int var_11 = 986399484;
int zero = 0;
short var_13 = (short)-32270;
long long int var_14 = 1546705584946074651LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
