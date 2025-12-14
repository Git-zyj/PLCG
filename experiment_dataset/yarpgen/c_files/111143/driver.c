#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4997107019156366929ULL;
long long int var_2 = -3998080447785592722LL;
unsigned int var_4 = 3280268975U;
unsigned short var_13 = (unsigned short)9603;
unsigned int var_14 = 3585705092U;
int zero = 0;
unsigned short var_18 = (unsigned short)14127;
long long int var_19 = -4364988358140797635LL;
int var_20 = 836360756;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
