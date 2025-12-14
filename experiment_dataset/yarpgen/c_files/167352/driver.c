#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4871395235949519944LL;
int var_1 = -1915906655;
short var_2 = (short)-17602;
short var_3 = (short)1773;
int var_5 = 2130075618;
int var_8 = -1200050032;
int var_9 = -2052642240;
int zero = 0;
unsigned int var_10 = 590976274U;
long long int var_11 = 9054737812886411978LL;
signed char var_12 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
