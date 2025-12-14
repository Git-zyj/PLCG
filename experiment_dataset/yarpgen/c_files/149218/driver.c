#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6593505219747416481ULL;
unsigned short var_3 = (unsigned short)21491;
unsigned long long int var_4 = 3430016523541729793ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 3921821393U;
unsigned int var_16 = 1967865646U;
signed char var_17 = (signed char)21;
short var_19 = (short)3659;
int zero = 0;
signed char var_20 = (signed char)49;
unsigned long long int var_21 = 11620476945690779144ULL;
unsigned int var_22 = 1662121895U;
unsigned int var_23 = 1734251483U;
long long int var_24 = -131581716164160279LL;
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
