#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1206938304;
long long int var_6 = 8849592069691096666LL;
short var_7 = (short)-4950;
signed char var_8 = (signed char)-35;
unsigned int var_13 = 3570567315U;
int var_14 = 1546119807;
int zero = 0;
signed char var_15 = (signed char)5;
unsigned int var_16 = 77574631U;
signed char var_17 = (signed char)107;
long long int var_18 = -6749029985824491567LL;
int var_19 = 573822380;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
