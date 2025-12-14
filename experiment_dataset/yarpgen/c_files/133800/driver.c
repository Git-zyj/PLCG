#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)138;
unsigned int var_3 = 2483351838U;
unsigned int var_4 = 1941920974U;
int var_9 = -995647516;
int var_11 = 883391022;
unsigned short var_12 = (unsigned short)30459;
unsigned char var_14 = (unsigned char)228;
int zero = 0;
int var_20 = -822571940;
_Bool var_21 = (_Bool)0;
long long int var_22 = -8347264229080754726LL;
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
