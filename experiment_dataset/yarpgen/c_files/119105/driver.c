#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-50;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)61387;
unsigned short var_11 = (unsigned short)34800;
unsigned char var_15 = (unsigned char)244;
unsigned long long int var_16 = 3259629384741305961ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)17105;
long long int var_19 = -469476460639254586LL;
unsigned short var_20 = (unsigned short)63474;
long long int var_21 = -1007587880600700412LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
