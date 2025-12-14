#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
short var_3 = (short)-26940;
short var_4 = (short)8115;
short var_5 = (short)4038;
_Bool var_10 = (_Bool)1;
int var_12 = -7660975;
unsigned long long int var_14 = 4893501570575521702ULL;
int zero = 0;
unsigned long long int var_19 = 16098119186768033563ULL;
unsigned char var_20 = (unsigned char)9;
unsigned int var_21 = 247710726U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
