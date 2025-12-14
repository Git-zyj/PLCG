#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8619;
signed char var_4 = (signed char)-122;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)9;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = -1448799903;
int zero = 0;
unsigned long long int var_13 = 1065831154272566465ULL;
unsigned long long int var_14 = 9422482377991352923ULL;
void init() {
}

void checksum() {
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
