#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -762790652209301631LL;
unsigned short var_1 = (unsigned short)29425;
long long int var_5 = -155375125749235777LL;
long long int var_6 = 3691091277065537632LL;
unsigned long long int var_11 = 7439540481509078964ULL;
int zero = 0;
signed char var_12 = (signed char)12;
unsigned long long int var_13 = 16283236013001732824ULL;
short var_14 = (short)23128;
unsigned long long int var_15 = 2924292558063040896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
