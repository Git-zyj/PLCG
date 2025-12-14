#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
unsigned short var_2 = (unsigned short)17389;
unsigned short var_6 = (unsigned short)51725;
long long int var_9 = 8976891891918231458LL;
int zero = 0;
unsigned short var_11 = (unsigned short)31696;
signed char var_12 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
