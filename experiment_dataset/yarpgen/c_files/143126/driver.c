#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)1;
signed char var_5 = (signed char)-105;
unsigned short var_8 = (unsigned short)47974;
signed char var_13 = (signed char)28;
signed char var_17 = (signed char)49;
unsigned int var_18 = 3254069957U;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
long long int var_21 = 1818075893171974619LL;
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
