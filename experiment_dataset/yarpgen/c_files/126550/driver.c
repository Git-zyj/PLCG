#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned long long int var_4 = 1234390913139963653ULL;
long long int var_10 = -3837130297282127217LL;
unsigned char var_13 = (unsigned char)147;
signed char var_15 = (signed char)77;
int zero = 0;
signed char var_16 = (signed char)-59;
short var_17 = (short)-10011;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
