#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1708201671;
unsigned long long int var_2 = 13857913615529935628ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-29033;
long long int var_6 = 5193616524575657681LL;
int var_10 = -1668247993;
int zero = 0;
int var_12 = -1893809189;
unsigned char var_13 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
