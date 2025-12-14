#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -336096454;
unsigned short var_5 = (unsigned short)13162;
int var_8 = -1531072913;
signed char var_12 = (signed char)-105;
long long int var_13 = -2545103473568369830LL;
unsigned long long int var_14 = 8601835211243852060ULL;
int var_16 = 552761945;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)23984;
signed char var_20 = (signed char)-117;
unsigned long long int var_21 = 9596761432390410705ULL;
unsigned char var_22 = (unsigned char)227;
void init() {
}

void checksum() {
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
