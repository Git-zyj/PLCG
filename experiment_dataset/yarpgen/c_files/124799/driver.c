#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
unsigned short var_3 = (unsigned short)26230;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-48;
unsigned short var_7 = (unsigned short)54275;
int zero = 0;
long long int var_10 = 5460771307446385151LL;
unsigned char var_11 = (unsigned char)84;
unsigned int var_12 = 3887140673U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
