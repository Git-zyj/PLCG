#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)104;
unsigned short var_8 = (unsigned short)15966;
_Bool var_10 = (_Bool)1;
int var_13 = 1884444492;
int zero = 0;
unsigned int var_17 = 121373440U;
long long int var_18 = 4606850480017124729LL;
unsigned short var_19 = (unsigned short)8364;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
