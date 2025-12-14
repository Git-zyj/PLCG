#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned int var_1 = 4097564237U;
int var_2 = -1014530942;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3684413840815241028LL;
signed char var_5 = (signed char)3;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2786484640U;
short var_12 = (short)-19786;
int var_13 = -976625322;
unsigned long long int var_14 = 1645546523588409222ULL;
int zero = 0;
long long int var_16 = 5755736890609431421LL;
unsigned int var_17 = 2030814863U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
