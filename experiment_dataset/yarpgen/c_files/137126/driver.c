#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18132;
long long int var_4 = 8429193285243638484LL;
short var_6 = (short)12378;
signed char var_8 = (signed char)-102;
long long int var_9 = -6335604895180030705LL;
long long int var_10 = -5596142745893594937LL;
unsigned char var_12 = (unsigned char)111;
int zero = 0;
unsigned char var_13 = (unsigned char)73;
long long int var_14 = -3931276679133232771LL;
unsigned long long int var_15 = 5426889085487988248ULL;
void init() {
}

void checksum() {
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
