#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-32;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)81;
int zero = 0;
unsigned int var_19 = 2371088482U;
long long int var_20 = 967042438119533621LL;
unsigned char var_21 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
