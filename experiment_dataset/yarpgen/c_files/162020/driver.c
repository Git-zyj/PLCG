#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9154022867275007138ULL;
unsigned short var_1 = (unsigned short)19898;
unsigned long long int var_2 = 2062234066662699414ULL;
long long int var_6 = 1696684442870821246LL;
long long int var_7 = -7980730576882629514LL;
unsigned short var_8 = (unsigned short)24052;
int var_10 = -1106760435;
int zero = 0;
long long int var_11 = -946494874707186423LL;
long long int var_12 = -5861984467355010332LL;
unsigned short var_13 = (unsigned short)65124;
unsigned char var_14 = (unsigned char)187;
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
