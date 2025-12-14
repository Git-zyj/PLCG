#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
unsigned char var_4 = (unsigned char)156;
signed char var_5 = (signed char)-63;
int var_6 = 615919156;
long long int var_7 = -813855539637290366LL;
long long int var_8 = 7941212291162412139LL;
signed char var_10 = (signed char)-80;
long long int var_11 = -936224807460679857LL;
unsigned char var_14 = (unsigned char)254;
unsigned long long int var_16 = 15593995608374172276ULL;
int zero = 0;
unsigned long long int var_18 = 13410091366406944092ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 1122560701;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
