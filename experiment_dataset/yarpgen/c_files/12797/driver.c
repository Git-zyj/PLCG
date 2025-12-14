#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
long long int var_1 = -8338392914888758332LL;
unsigned long long int var_3 = 1586159626072003422ULL;
unsigned long long int var_4 = 2915844580566411711ULL;
unsigned char var_6 = (unsigned char)44;
unsigned long long int var_9 = 13157995490523969382ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 5320825504257963151ULL;
_Bool var_13 = (_Bool)1;
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
