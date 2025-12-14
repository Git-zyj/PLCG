#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4464388594649576672ULL;
unsigned long long int var_3 = 3969554571078358850ULL;
long long int var_5 = -4297442930613155762LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)58903;
unsigned short var_9 = (unsigned short)57682;
int zero = 0;
unsigned short var_10 = (unsigned short)3559;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
