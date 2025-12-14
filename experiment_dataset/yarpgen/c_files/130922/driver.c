#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
_Bool var_3 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)89;
unsigned long long int var_13 = 2902792483517205840ULL;
int var_16 = -564183148;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
