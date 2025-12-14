#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 6811911471147226342ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 9107288816841224133LL;
unsigned char var_8 = (unsigned char)155;
int var_9 = 840224219;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
unsigned short var_12 = (unsigned short)44238;
unsigned int var_13 = 4123182609U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
