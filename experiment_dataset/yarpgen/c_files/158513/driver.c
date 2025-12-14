#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)56;
signed char var_4 = (signed char)20;
long long int var_7 = 1598076939454582806LL;
signed char var_8 = (signed char)78;
long long int var_12 = 365407514217794474LL;
unsigned char var_13 = (unsigned char)127;
int zero = 0;
signed char var_18 = (signed char)99;
signed char var_19 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
