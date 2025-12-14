#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16255;
unsigned long long int var_3 = 2635178431106049522ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 13762398174838865151ULL;
unsigned char var_9 = (unsigned char)194;
unsigned int var_10 = 3319291592U;
int zero = 0;
signed char var_11 = (signed char)-87;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2819709730U;
long long int var_14 = 6812356412114375943LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
