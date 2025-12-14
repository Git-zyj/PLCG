#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10022;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)36017;
signed char var_9 = (signed char)-31;
int zero = 0;
signed char var_10 = (signed char)-75;
signed char var_11 = (signed char)67;
_Bool var_12 = (_Bool)1;
int var_13 = 78865940;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
