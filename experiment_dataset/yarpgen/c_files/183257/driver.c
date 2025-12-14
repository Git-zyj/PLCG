#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19939;
_Bool var_2 = (_Bool)0;
int var_4 = 1988747043;
long long int var_6 = -76155682264553527LL;
int var_11 = 177274151;
signed char var_12 = (signed char)118;
int zero = 0;
short var_13 = (short)21890;
unsigned short var_14 = (unsigned short)19615;
_Bool var_15 = (_Bool)0;
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
