#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53342;
int var_1 = -98753638;
unsigned char var_2 = (unsigned char)52;
unsigned short var_3 = (unsigned short)5632;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)61962;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
long long int var_12 = 2653137904845164037LL;
unsigned short var_13 = (unsigned short)15535;
unsigned long long int var_14 = 3587394524554882618ULL;
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
