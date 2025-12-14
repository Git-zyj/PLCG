#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)4;
short var_11 = (short)28488;
unsigned char var_13 = (unsigned char)149;
unsigned short var_14 = (unsigned short)26160;
signed char var_16 = (signed char)-11;
unsigned short var_17 = (unsigned short)20679;
unsigned char var_18 = (unsigned char)102;
int zero = 0;
unsigned char var_20 = (unsigned char)132;
long long int var_21 = -9057151312957457269LL;
long long int var_22 = 7948580367365603460LL;
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
