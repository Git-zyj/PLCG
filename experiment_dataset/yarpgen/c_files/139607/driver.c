#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22210;
long long int var_2 = -1240688498156856812LL;
short var_3 = (short)23362;
signed char var_4 = (signed char)34;
int zero = 0;
signed char var_17 = (signed char)-63;
short var_18 = (short)4456;
void init() {
}

void checksum() {
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
