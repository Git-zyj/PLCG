#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11257;
long long int var_10 = -7632083784109068043LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 16814390690729679781ULL;
short var_14 = (short)-4660;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
