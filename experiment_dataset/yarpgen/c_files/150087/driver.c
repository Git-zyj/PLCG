#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6576247492312466717LL;
unsigned int var_4 = 2993097981U;
unsigned char var_5 = (unsigned char)234;
int var_6 = -1463917251;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 11995081525654605679ULL;
unsigned long long int var_12 = 6463331466404528464ULL;
short var_13 = (short)10515;
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
