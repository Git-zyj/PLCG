#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_7 = 4626825021837029687LL;
unsigned char var_9 = (unsigned char)18;
unsigned short var_10 = (unsigned short)57837;
int zero = 0;
int var_11 = 799018152;
signed char var_12 = (signed char)-109;
unsigned int var_13 = 3060821690U;
unsigned short var_14 = (unsigned short)14138;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
