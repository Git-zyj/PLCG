#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1759317877;
int var_8 = -629765856;
long long int var_11 = 6126210849437250908LL;
long long int var_13 = 5202621575465239300LL;
int zero = 0;
unsigned short var_14 = (unsigned short)53463;
unsigned short var_15 = (unsigned short)59453;
int var_16 = 1934574156;
short var_17 = (short)-26620;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
