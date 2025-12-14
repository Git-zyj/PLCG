#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-94;
signed char var_4 = (signed char)-73;
long long int var_7 = -2068518477352821819LL;
short var_9 = (short)-8029;
int zero = 0;
long long int var_11 = 938963462512214103LL;
signed char var_12 = (signed char)-26;
short var_13 = (short)-9472;
long long int var_14 = -8784195620873802379LL;
long long int var_15 = 7844549334629591721LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
