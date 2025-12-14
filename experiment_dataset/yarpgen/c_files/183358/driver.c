#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5919577538991091998ULL;
long long int var_1 = 2727683302051614509LL;
unsigned short var_2 = (unsigned short)5401;
unsigned short var_10 = (unsigned short)49863;
int var_11 = -1823156969;
int var_13 = -698730432;
unsigned long long int var_14 = 16016612865091981332ULL;
unsigned long long int var_16 = 16667068576184879182ULL;
unsigned short var_17 = (unsigned short)60041;
int zero = 0;
unsigned short var_18 = (unsigned short)7581;
int var_19 = -1677201972;
long long int var_20 = 5889760488067666974LL;
unsigned char var_21 = (unsigned char)228;
unsigned long long int var_22 = 5634069936014626041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
