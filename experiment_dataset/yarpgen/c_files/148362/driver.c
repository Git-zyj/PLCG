#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-71;
signed char var_9 = (signed char)32;
short var_15 = (short)-24923;
short var_16 = (short)-26104;
signed char var_18 = (signed char)50;
int zero = 0;
int var_19 = 1518883121;
signed char var_20 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
