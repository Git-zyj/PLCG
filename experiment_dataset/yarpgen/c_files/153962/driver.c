#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1050981253U;
short var_3 = (short)24082;
unsigned long long int var_4 = 5292933104434352418ULL;
_Bool var_7 = (_Bool)1;
int var_8 = -806653648;
unsigned short var_9 = (unsigned short)41396;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 710685377U;
long long int var_14 = 4727235241760901885LL;
long long int var_16 = 3395759623231833741LL;
int zero = 0;
unsigned char var_18 = (unsigned char)194;
unsigned long long int var_19 = 1334098144739701189ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
