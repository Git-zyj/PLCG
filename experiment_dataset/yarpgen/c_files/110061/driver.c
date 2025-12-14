#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51435;
unsigned short var_3 = (unsigned short)10574;
int var_4 = -1862018168;
unsigned char var_6 = (unsigned char)47;
unsigned char var_8 = (unsigned char)157;
unsigned short var_9 = (unsigned short)42404;
short var_12 = (short)10690;
int zero = 0;
unsigned short var_15 = (unsigned short)60269;
long long int var_16 = 2353847872931670429LL;
unsigned long long int var_17 = 4244859168681600761ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7747154238769138819LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
