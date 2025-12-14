#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
long long int var_3 = -1647842492223408827LL;
int var_4 = 2113066282;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1761792928U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 15243737819358027100ULL;
int var_15 = 220846792;
int zero = 0;
unsigned long long int var_16 = 9822620716152657998ULL;
signed char var_17 = (signed char)-52;
unsigned short var_18 = (unsigned short)28317;
int var_19 = 1069726799;
unsigned char var_20 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
