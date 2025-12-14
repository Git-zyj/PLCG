#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4334163592998287361LL;
long long int var_1 = -7925944798262089257LL;
long long int var_4 = 3223126468064642633LL;
unsigned short var_6 = (unsigned short)2389;
unsigned short var_8 = (unsigned short)21956;
unsigned char var_10 = (unsigned char)184;
unsigned long long int var_11 = 11666429402789401324ULL;
unsigned short var_17 = (unsigned short)8484;
unsigned long long int var_18 = 6425937081945835836ULL;
int zero = 0;
long long int var_19 = 7655677218300643875LL;
unsigned char var_20 = (unsigned char)181;
unsigned short var_21 = (unsigned short)51765;
unsigned short var_22 = (unsigned short)28472;
signed char var_23 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
