#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5969039580284197766LL;
unsigned int var_1 = 901863818U;
unsigned char var_3 = (unsigned char)190;
int var_4 = -909795676;
signed char var_5 = (signed char)112;
int var_16 = -174612154;
int zero = 0;
unsigned long long int var_18 = 1374905937801650189ULL;
short var_19 = (short)16829;
signed char var_20 = (signed char)-21;
unsigned short var_21 = (unsigned short)45604;
unsigned int var_22 = 1967925418U;
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
