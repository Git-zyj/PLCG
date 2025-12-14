#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39776;
unsigned char var_8 = (unsigned char)240;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)16551;
int var_21 = -483346696;
short var_22 = (short)-11714;
void init() {
}

void checksum() {
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
