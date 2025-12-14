#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)51;
unsigned int var_2 = 1638569424U;
int var_3 = -151400612;
int var_4 = -1704205516;
unsigned char var_5 = (unsigned char)118;
long long int var_7 = 4006300200098328069LL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)216;
int zero = 0;
signed char var_12 = (signed char)-121;
signed char var_13 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
