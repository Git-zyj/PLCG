#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-69;
unsigned int var_4 = 238700973U;
int var_5 = -421812673;
unsigned char var_6 = (unsigned char)102;
unsigned short var_7 = (unsigned short)63750;
int var_8 = -468868569;
long long int var_9 = -1568707053317249605LL;
int zero = 0;
unsigned short var_11 = (unsigned short)31698;
unsigned int var_12 = 4137660725U;
signed char var_13 = (signed char)-21;
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
