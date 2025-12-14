#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9647;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2457542546450065447LL;
int zero = 0;
unsigned char var_12 = (unsigned char)54;
unsigned short var_13 = (unsigned short)1062;
int var_14 = 1747116583;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
