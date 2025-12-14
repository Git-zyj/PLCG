#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8418656222263972601ULL;
unsigned short var_7 = (unsigned short)9698;
signed char var_8 = (signed char)-124;
int zero = 0;
unsigned char var_10 = (unsigned char)199;
unsigned char var_11 = (unsigned char)220;
short var_12 = (short)28815;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
