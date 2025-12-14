#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18823;
unsigned long long int var_9 = 14867014086542589836ULL;
signed char var_11 = (signed char)-6;
int zero = 0;
short var_18 = (short)11946;
signed char var_19 = (signed char)-86;
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
