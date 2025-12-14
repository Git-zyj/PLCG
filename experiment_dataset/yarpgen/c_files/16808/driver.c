#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned long long int var_5 = 15461969294474329931ULL;
signed char var_6 = (signed char)36;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-319;
int var_11 = -1596660735;
int zero = 0;
unsigned char var_12 = (unsigned char)211;
unsigned long long int var_13 = 10795194161909790561ULL;
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
