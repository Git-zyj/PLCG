#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4952021467489176544LL;
long long int var_3 = 6822456059656236761LL;
int var_5 = 1755905508;
short var_8 = (short)26778;
short var_11 = (short)2425;
unsigned char var_17 = (unsigned char)152;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)166;
short var_21 = (short)28411;
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
