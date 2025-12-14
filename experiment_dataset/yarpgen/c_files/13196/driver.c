#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1912955766579060564LL;
long long int var_7 = -8322867686490847362LL;
unsigned short var_11 = (unsigned short)8030;
unsigned char var_14 = (unsigned char)174;
unsigned char var_15 = (unsigned char)214;
int zero = 0;
unsigned char var_19 = (unsigned char)21;
unsigned char var_20 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
