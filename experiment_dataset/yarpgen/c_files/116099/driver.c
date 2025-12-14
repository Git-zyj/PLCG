#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-59;
signed char var_4 = (signed char)40;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-19956;
short var_8 = (short)-19807;
int zero = 0;
signed char var_14 = (signed char)49;
int var_15 = 1276990461;
void init() {
}

void checksum() {
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
