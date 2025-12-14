#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3524961430U;
signed char var_6 = (signed char)46;
unsigned long long int var_7 = 9870878792765813673ULL;
long long int var_9 = 4250906534781747313LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)167;
long long int var_12 = 3220739975334690458LL;
int var_13 = 1399099943;
signed char var_14 = (signed char)-66;
long long int var_15 = 5497320189798350467LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
