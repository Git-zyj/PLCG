#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
int var_1 = 1396312044;
unsigned short var_2 = (unsigned short)26131;
unsigned int var_3 = 2798525977U;
unsigned char var_5 = (unsigned char)112;
unsigned short var_10 = (unsigned short)26253;
int zero = 0;
unsigned long long int var_11 = 15861909761725185460ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
