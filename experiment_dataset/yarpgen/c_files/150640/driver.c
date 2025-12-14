#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1759920189U;
int var_2 = 265948879;
int var_3 = 1510932854;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)22350;
unsigned char var_8 = (unsigned char)251;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 5475455538875219227ULL;
long long int var_14 = 7928540494332124934LL;
int var_15 = -2081919144;
void init() {
}

void checksum() {
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
