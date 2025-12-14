#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9098686950585280273LL;
unsigned long long int var_2 = 2105246234763294268ULL;
signed char var_3 = (signed char)63;
short var_4 = (short)-17496;
signed char var_6 = (signed char)-33;
long long int var_9 = 4781298331736364494LL;
int zero = 0;
unsigned int var_12 = 2395405077U;
long long int var_13 = -8167000234915085516LL;
unsigned long long int var_14 = 7071654342267017736ULL;
signed char var_15 = (signed char)-22;
void init() {
}

void checksum() {
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
