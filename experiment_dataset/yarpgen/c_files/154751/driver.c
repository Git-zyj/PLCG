#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
signed char var_2 = (signed char)62;
signed char var_7 = (signed char)55;
signed char var_8 = (signed char)117;
signed char var_9 = (signed char)-90;
int zero = 0;
signed char var_15 = (signed char)63;
signed char var_16 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
