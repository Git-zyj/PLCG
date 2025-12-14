#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)37;
unsigned int var_4 = 414015527U;
int var_6 = -98261169;
unsigned short var_11 = (unsigned short)50300;
unsigned long long int var_12 = 5112058413730044984ULL;
int var_13 = -1459446090;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)27;
int zero = 0;
unsigned int var_17 = 417605248U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 247194733U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
