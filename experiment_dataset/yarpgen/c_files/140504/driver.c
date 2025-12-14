#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
signed char var_5 = (signed char)18;
long long int var_6 = 980845663187647720LL;
unsigned int var_8 = 2397725193U;
short var_13 = (short)-29938;
unsigned int var_16 = 173567958U;
int zero = 0;
unsigned short var_17 = (unsigned short)22008;
long long int var_18 = 641857744896168460LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
