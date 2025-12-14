#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)172;
unsigned long long int var_8 = 3953450662105876775ULL;
short var_10 = (short)26795;
short var_14 = (short)5824;
signed char var_18 = (signed char)121;
int zero = 0;
int var_20 = 2025986432;
unsigned long long int var_21 = 14689299207238460969ULL;
unsigned long long int var_22 = 11343079466452736256ULL;
long long int var_23 = -2789831818217162758LL;
unsigned short var_24 = (unsigned short)52674;
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
