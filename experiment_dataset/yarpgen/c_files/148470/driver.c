#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -452551680;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)18596;
unsigned long long int var_6 = 11232513040084561985ULL;
unsigned char var_7 = (unsigned char)34;
unsigned long long int var_9 = 7494226081473158045ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -2145519351;
unsigned short var_13 = (unsigned short)38419;
_Bool var_14 = (_Bool)0;
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
