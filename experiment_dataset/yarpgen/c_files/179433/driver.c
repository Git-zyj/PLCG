#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2195027482204287806LL;
short var_8 = (short)-32059;
unsigned int var_12 = 4223226926U;
int zero = 0;
long long int var_13 = 6972709265043236856LL;
int var_14 = 1762143994;
int var_15 = -1494160200;
void init() {
}

void checksum() {
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
