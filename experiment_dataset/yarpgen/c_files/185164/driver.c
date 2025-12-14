#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned int var_1 = 2189589855U;
unsigned int var_2 = 1266073347U;
signed char var_3 = (signed char)-80;
unsigned long long int var_4 = 13189533482069451611ULL;
short var_6 = (short)-2676;
int var_7 = -1836479500;
int var_8 = -1644761973;
short var_9 = (short)-2161;
short var_12 = (short)-11837;
int zero = 0;
long long int var_13 = 5398215158656671240LL;
unsigned long long int var_14 = 10274966414689140094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
