#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)108;
signed char var_9 = (signed char)91;
long long int var_10 = 6600394290671638149LL;
unsigned long long int var_15 = 16926114905020888883ULL;
unsigned short var_17 = (unsigned short)12823;
int zero = 0;
unsigned short var_20 = (unsigned short)14449;
int var_21 = 21348844;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
