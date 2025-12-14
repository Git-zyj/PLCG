#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1097476332;
short var_3 = (short)14502;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 665455599U;
unsigned short var_8 = (unsigned short)9273;
unsigned short var_9 = (unsigned short)60995;
int zero = 0;
unsigned short var_11 = (unsigned short)31518;
unsigned int var_12 = 2687775889U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
