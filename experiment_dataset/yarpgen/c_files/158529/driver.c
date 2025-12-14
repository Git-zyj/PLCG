#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56355;
long long int var_2 = -1017731802710197798LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)61;
signed char var_7 = (signed char)123;
unsigned short var_10 = (unsigned short)4117;
int zero = 0;
int var_11 = -240653508;
unsigned short var_12 = (unsigned short)49266;
unsigned short var_13 = (unsigned short)56581;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
