#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48041;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)126;
long long int var_12 = -6118885895930068261LL;
long long int var_16 = -5426464458230605675LL;
unsigned short var_17 = (unsigned short)47068;
unsigned short var_18 = (unsigned short)60614;
unsigned short var_19 = (unsigned short)24239;
int zero = 0;
short var_20 = (short)28239;
long long int var_21 = 696792908966262565LL;
unsigned short var_22 = (unsigned short)52900;
long long int var_23 = -6949093309189252875LL;
signed char var_24 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
