#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
signed char var_4 = (signed char)47;
signed char var_5 = (signed char)118;
signed char var_6 = (signed char)-108;
signed char var_13 = (signed char)116;
int zero = 0;
signed char var_19 = (signed char)51;
signed char var_20 = (signed char)-116;
signed char var_21 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
