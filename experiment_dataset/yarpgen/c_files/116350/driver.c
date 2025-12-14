#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6039061573593762439ULL;
unsigned int var_3 = 2608157138U;
short var_6 = (short)-28241;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)50280;
long long int var_11 = 6087817861719539588LL;
unsigned short var_12 = (unsigned short)41562;
long long int var_16 = 787017908467341150LL;
unsigned char var_18 = (unsigned char)68;
int zero = 0;
signed char var_19 = (signed char)-112;
unsigned long long int var_20 = 10143193655827676922ULL;
signed char var_21 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
