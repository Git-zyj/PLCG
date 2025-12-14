#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25585;
unsigned long long int var_7 = 5971257942354709430ULL;
signed char var_9 = (signed char)-96;
unsigned short var_10 = (unsigned short)29190;
long long int var_13 = 1838566574359077904LL;
int zero = 0;
signed char var_14 = (signed char)-60;
int var_15 = -1871760093;
void init() {
}

void checksum() {
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
