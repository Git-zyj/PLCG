#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-5;
unsigned long long int var_5 = 4926556089641326298ULL;
unsigned short var_6 = (unsigned short)52297;
unsigned long long int var_11 = 13673887955658749452ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2723944213U;
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
