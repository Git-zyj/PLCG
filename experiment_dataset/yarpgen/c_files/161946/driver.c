#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21334;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)20;
unsigned char var_3 = (unsigned char)100;
unsigned int var_4 = 1209502436U;
unsigned short var_6 = (unsigned short)50285;
unsigned long long int var_7 = 2065173250712918083ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)120;
int zero = 0;
unsigned long long int var_11 = 1394166714576118054ULL;
short var_12 = (short)1424;
unsigned int var_13 = 2819515304U;
void init() {
}

void checksum() {
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
