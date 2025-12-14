#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
unsigned short var_2 = (unsigned short)34710;
unsigned int var_3 = 3093147554U;
unsigned long long int var_6 = 1603949067019451108ULL;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-80;
unsigned short var_12 = (unsigned short)22546;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
