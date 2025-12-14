#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8032;
signed char var_3 = (signed char)-12;
unsigned short var_9 = (unsigned short)106;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)15045;
int zero = 0;
unsigned long long int var_20 = 10438110524753518257ULL;
long long int var_21 = 948193312918168097LL;
unsigned long long int var_22 = 12481284202576504276ULL;
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
