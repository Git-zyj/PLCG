#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 354725419U;
unsigned long long int var_1 = 15384861400832809771ULL;
short var_2 = (short)19675;
long long int var_3 = -9191811953343913904LL;
long long int var_7 = -6816426662980227464LL;
int var_9 = 831884726;
signed char var_10 = (signed char)65;
int zero = 0;
unsigned int var_12 = 3705922560U;
int var_13 = 694701899;
int var_14 = 1690605577;
short var_15 = (short)-20779;
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
