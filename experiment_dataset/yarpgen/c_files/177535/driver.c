#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16187;
long long int var_2 = 3521433502983389680LL;
unsigned long long int var_5 = 14932230608420058100ULL;
int zero = 0;
short var_10 = (short)-9874;
unsigned short var_11 = (unsigned short)56759;
unsigned long long int var_12 = 15092947971775017498ULL;
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
