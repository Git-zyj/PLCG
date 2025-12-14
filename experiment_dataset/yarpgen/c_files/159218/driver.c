#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -3244905062551047546LL;
signed char var_5 = (signed char)-44;
short var_6 = (short)27071;
unsigned int var_12 = 2250309756U;
int zero = 0;
short var_13 = (short)1407;
int var_14 = -807770918;
void init() {
}

void checksum() {
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
