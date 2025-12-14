#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
signed char var_7 = (signed char)104;
signed char var_9 = (signed char)-46;
signed char var_10 = (signed char)-67;
signed char var_17 = (signed char)-34;
signed char var_18 = (signed char)80;
signed char var_19 = (signed char)-35;
int zero = 0;
signed char var_20 = (signed char)115;
signed char var_21 = (signed char)13;
void init() {
}

void checksum() {
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
