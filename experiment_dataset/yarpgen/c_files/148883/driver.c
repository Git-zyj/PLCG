#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2872205339561185120ULL;
unsigned short var_6 = (unsigned short)58436;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_10 = 16575057814627452183ULL;
unsigned char var_11 = (unsigned char)153;
long long int var_16 = 7672848523979710456LL;
int var_18 = 373744974;
int zero = 0;
unsigned long long int var_19 = 16166927387702416855ULL;
unsigned short var_20 = (unsigned short)22690;
unsigned short var_21 = (unsigned short)40650;
long long int var_22 = -1986031525294697789LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
