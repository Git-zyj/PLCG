#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7281941992094405045LL;
int var_1 = 1382136738;
int var_4 = -1468469651;
long long int var_9 = -2589090128979430311LL;
int zero = 0;
unsigned short var_10 = (unsigned short)22343;
signed char var_11 = (signed char)-85;
int var_12 = -929251802;
signed char var_13 = (signed char)67;
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
