#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)156;
unsigned long long int var_2 = 2726691111761071348ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_11 = (unsigned short)427;
int zero = 0;
unsigned short var_12 = (unsigned short)29966;
unsigned long long int var_13 = 10176168963824199592ULL;
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
