#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 70401627;
unsigned short var_1 = (unsigned short)3984;
long long int var_2 = 1563061934003237329LL;
int var_3 = -930284320;
_Bool var_8 = (_Bool)0;
int var_9 = -771842765;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58524;
signed char var_13 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
