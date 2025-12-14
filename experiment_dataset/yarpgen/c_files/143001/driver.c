#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2593819151441716033LL;
signed char var_4 = (signed char)-113;
signed char var_6 = (signed char)-126;
short var_7 = (short)-26406;
signed char var_15 = (signed char)66;
int zero = 0;
int var_20 = 350959725;
signed char var_21 = (signed char)-58;
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
