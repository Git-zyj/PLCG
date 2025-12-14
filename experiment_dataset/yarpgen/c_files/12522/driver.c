#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26747;
unsigned short var_9 = (unsigned short)28995;
int var_10 = 1871440706;
unsigned char var_11 = (unsigned char)127;
short var_12 = (short)-13528;
unsigned int var_13 = 3808423965U;
long long int var_15 = 5987654352095205116LL;
signed char var_16 = (signed char)51;
unsigned char var_18 = (unsigned char)33;
int zero = 0;
unsigned int var_19 = 1186177894U;
signed char var_20 = (signed char)-71;
long long int var_21 = 3803190645718499037LL;
_Bool var_22 = (_Bool)1;
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
