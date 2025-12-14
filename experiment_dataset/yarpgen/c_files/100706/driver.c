#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -358435685761516449LL;
long long int var_8 = -7882664888346666165LL;
int var_12 = -893414597;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_19 = (short)-4990;
short var_20 = (short)-19753;
void init() {
}

void checksum() {
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
