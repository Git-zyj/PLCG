#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7955782234032290680ULL;
long long int var_3 = 7212012892437490265LL;
long long int var_8 = 8354745290454992958LL;
unsigned long long int var_10 = 8394484509773884022ULL;
unsigned long long int var_11 = 15342479147568964235ULL;
short var_12 = (short)-9865;
unsigned long long int var_15 = 1407617943402383768ULL;
unsigned long long int var_16 = 14569199235995863483ULL;
int zero = 0;
long long int var_19 = 2585852565047114674LL;
unsigned long long int var_20 = 16802365297979904622ULL;
short var_21 = (short)26564;
unsigned long long int var_22 = 9112328890090199959ULL;
short var_23 = (short)17532;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
