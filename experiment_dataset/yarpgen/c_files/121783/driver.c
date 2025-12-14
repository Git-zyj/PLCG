#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8531906077256380096LL;
unsigned short var_4 = (unsigned short)42631;
long long int var_5 = -2727409312040302111LL;
long long int var_7 = -5875031437058885321LL;
signed char var_8 = (signed char)-102;
int zero = 0;
long long int var_10 = -3425416259637171872LL;
short var_11 = (short)-24907;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
