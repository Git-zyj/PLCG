#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)32;
long long int var_11 = -8692560460560902056LL;
unsigned int var_14 = 3223365514U;
unsigned char var_17 = (unsigned char)196;
int var_18 = -628455866;
int zero = 0;
signed char var_20 = (signed char)33;
unsigned char var_21 = (unsigned char)155;
unsigned int var_22 = 3262942612U;
int var_23 = 866303409;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
