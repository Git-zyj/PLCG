#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2230081722921395917LL;
unsigned char var_1 = (unsigned char)22;
unsigned char var_3 = (unsigned char)165;
unsigned char var_4 = (unsigned char)207;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-19;
unsigned long long int var_9 = 9123492696613880078ULL;
unsigned long long int var_11 = 4069818652385490684ULL;
unsigned short var_12 = (unsigned short)61093;
long long int var_13 = -6789747019493910488LL;
int zero = 0;
unsigned short var_16 = (unsigned short)60342;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
