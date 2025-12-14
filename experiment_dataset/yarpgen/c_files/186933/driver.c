#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6034130024254652012ULL;
unsigned char var_2 = (unsigned char)53;
long long int var_4 = -3533018337342901554LL;
unsigned char var_7 = (unsigned char)104;
unsigned int var_8 = 3444807540U;
unsigned char var_9 = (unsigned char)200;
long long int var_12 = -5972331347203144967LL;
unsigned short var_13 = (unsigned short)13980;
long long int var_14 = -7312531157075089919LL;
unsigned int var_15 = 2923264062U;
long long int var_17 = -2248570883073767913LL;
unsigned int var_18 = 853663414U;
int zero = 0;
signed char var_20 = (signed char)86;
unsigned long long int var_21 = 13010767824273070103ULL;
unsigned long long int var_22 = 7339811659080862633ULL;
unsigned short var_23 = (unsigned short)18586;
long long int var_24 = -7213808335153725020LL;
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
