#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13547;
signed char var_8 = (signed char)127;
long long int var_9 = 8412431014503946768LL;
int var_10 = 79333794;
unsigned int var_14 = 1734796117U;
unsigned int var_15 = 2823381691U;
int zero = 0;
long long int var_19 = -3920422106612596698LL;
unsigned short var_20 = (unsigned short)54718;
void init() {
}

void checksum() {
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
