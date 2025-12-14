#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3899630921559468334LL;
unsigned char var_6 = (unsigned char)53;
long long int var_7 = 1368241962465207659LL;
int zero = 0;
unsigned char var_17 = (unsigned char)54;
unsigned short var_18 = (unsigned short)50236;
unsigned long long int var_19 = 1805504773327500752ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
