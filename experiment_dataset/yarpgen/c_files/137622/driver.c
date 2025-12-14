#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)249;
short var_10 = (short)17108;
unsigned char var_11 = (unsigned char)165;
signed char var_14 = (signed char)-48;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)27972;
short var_21 = (short)26357;
unsigned long long int var_22 = 6504835022312856947ULL;
void init() {
}

void checksum() {
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
