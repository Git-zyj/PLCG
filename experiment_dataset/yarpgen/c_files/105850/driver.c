#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_11 = 175916829401493754LL;
unsigned int var_12 = 3597150711U;
int var_18 = 1224075127;
int zero = 0;
long long int var_20 = 5268420146476015399LL;
short var_21 = (short)15490;
signed char var_22 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
