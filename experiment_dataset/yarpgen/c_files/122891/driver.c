#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
unsigned short var_5 = (unsigned short)23641;
long long int var_12 = 2007422764385713113LL;
signed char var_14 = (signed char)62;
unsigned short var_18 = (unsigned short)62133;
int zero = 0;
unsigned int var_19 = 2558178348U;
int var_20 = -98380464;
unsigned short var_21 = (unsigned short)37262;
unsigned int var_22 = 3306150372U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
