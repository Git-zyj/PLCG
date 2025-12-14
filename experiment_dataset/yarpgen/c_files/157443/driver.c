#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1023324735567981333LL;
unsigned long long int var_2 = 3939045318825900584ULL;
long long int var_5 = 4355509557749836568LL;
unsigned char var_6 = (unsigned char)252;
long long int var_8 = 5666371877375185861LL;
short var_9 = (short)8040;
unsigned short var_11 = (unsigned short)50908;
long long int var_13 = -3424987816261627544LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-27;
unsigned long long int var_16 = 15263511110772463977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
