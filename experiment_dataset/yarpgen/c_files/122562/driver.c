#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)58690;
short var_5 = (short)25512;
unsigned int var_6 = 1404502312U;
unsigned char var_8 = (unsigned char)104;
int zero = 0;
unsigned long long int var_12 = 15963750433697995798ULL;
unsigned short var_13 = (unsigned short)50424;
long long int var_14 = 2396339941426995029LL;
void init() {
}

void checksum() {
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
