#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -353279385312204090LL;
int var_2 = -1925493786;
long long int var_6 = 5815828643398037763LL;
int zero = 0;
long long int var_12 = 8745498468447447541LL;
short var_13 = (short)-18490;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1726603837U;
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
