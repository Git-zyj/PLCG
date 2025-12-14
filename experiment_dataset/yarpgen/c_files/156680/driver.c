#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -2440256717118427651LL;
signed char var_13 = (signed char)69;
int zero = 0;
long long int var_19 = -7737129695547458800LL;
unsigned long long int var_20 = 171727131059066189ULL;
signed char var_21 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
