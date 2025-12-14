#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3945573316353784434LL;
unsigned long long int var_6 = 1540954041522070645ULL;
short var_9 = (short)22372;
int zero = 0;
short var_11 = (short)-15157;
short var_12 = (short)3835;
signed char var_13 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
