#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3154;
int var_2 = 83283850;
long long int var_6 = 7860355043223011558LL;
int var_9 = -2145053960;
signed char var_17 = (signed char)122;
int zero = 0;
unsigned short var_18 = (unsigned short)17306;
int var_19 = 1021352658;
long long int var_20 = 1404784288985888756LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
