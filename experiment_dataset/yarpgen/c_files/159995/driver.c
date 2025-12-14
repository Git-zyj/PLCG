#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1549737543;
_Bool var_4 = (_Bool)0;
long long int var_10 = -3586055728118552649LL;
unsigned char var_16 = (unsigned char)224;
int zero = 0;
unsigned short var_19 = (unsigned short)22615;
unsigned char var_20 = (unsigned char)196;
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
