#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
int var_2 = -862567001;
short var_9 = (short)-8690;
unsigned short var_13 = (unsigned short)13787;
long long int var_15 = 35629684593156737LL;
int zero = 0;
short var_16 = (short)-11145;
short var_17 = (short)-20546;
short var_18 = (short)18308;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
