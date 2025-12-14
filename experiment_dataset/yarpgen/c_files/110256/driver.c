#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 573722109U;
int var_4 = -401782837;
int var_5 = 1988332879;
int var_6 = 670223693;
short var_7 = (short)-20640;
unsigned int var_8 = 1182365290U;
int var_11 = -191045451;
_Bool var_12 = (_Bool)1;
unsigned int var_17 = 599174309U;
int zero = 0;
unsigned int var_20 = 2271528283U;
unsigned int var_21 = 486415339U;
unsigned int var_22 = 1739352044U;
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
