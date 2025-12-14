#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -822889611;
long long int var_9 = -4654317114923209246LL;
unsigned short var_11 = (unsigned short)53343;
short var_12 = (short)281;
int var_13 = 1534554174;
unsigned long long int var_15 = 3840692204880143543ULL;
int zero = 0;
signed char var_20 = (signed char)-106;
unsigned char var_21 = (unsigned char)46;
signed char var_22 = (signed char)-92;
long long int var_23 = -1346887647172531727LL;
long long int var_24 = -8104910791720792528LL;
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
