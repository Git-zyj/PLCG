#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
long long int var_1 = 8274075028849227384LL;
unsigned short var_2 = (unsigned short)60828;
unsigned long long int var_4 = 12945787963506764900ULL;
unsigned int var_8 = 1057819791U;
unsigned int var_12 = 692278600U;
int var_13 = 613390843;
_Bool var_14 = (_Bool)0;
long long int var_16 = 3866479810301657882LL;
int zero = 0;
unsigned int var_17 = 532768513U;
unsigned char var_18 = (unsigned char)76;
unsigned int var_19 = 2194048516U;
unsigned short var_20 = (unsigned short)57069;
void init() {
}

void checksum() {
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
