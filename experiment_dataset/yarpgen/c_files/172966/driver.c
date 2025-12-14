#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18002333646424032854ULL;
unsigned char var_6 = (unsigned char)197;
signed char var_13 = (signed char)-87;
unsigned long long int var_18 = 5304335697944046773ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)1691;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
