#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1083858534;
unsigned long long int var_2 = 4602607718966720694ULL;
short var_4 = (short)-1918;
unsigned char var_6 = (unsigned char)153;
unsigned short var_7 = (unsigned short)2794;
unsigned short var_9 = (unsigned short)28903;
unsigned char var_10 = (unsigned char)53;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1409073908U;
int var_14 = 1902222724;
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
