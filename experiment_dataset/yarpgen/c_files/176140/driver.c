#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-85;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)252;
_Bool var_7 = (_Bool)1;
int var_9 = -257414260;
long long int var_11 = -2454697825814549786LL;
signed char var_12 = (signed char)-28;
signed char var_13 = (signed char)-36;
signed char var_14 = (signed char)32;
int zero = 0;
signed char var_15 = (signed char)102;
unsigned short var_16 = (unsigned short)60240;
unsigned long long int var_17 = 8215369992542037633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
