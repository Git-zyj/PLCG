#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-126;
signed char var_3 = (signed char)16;
signed char var_5 = (signed char)-40;
signed char var_6 = (signed char)35;
signed char var_9 = (signed char)-102;
signed char var_11 = (signed char)-60;
int zero = 0;
signed char var_12 = (signed char)-12;
signed char var_13 = (signed char)117;
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
