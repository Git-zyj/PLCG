#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned int var_3 = 1404594766U;
unsigned long long int var_5 = 1095459410744665079ULL;
signed char var_6 = (signed char)118;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -7700347498323743435LL;
int var_12 = 2069249711;
unsigned short var_13 = (unsigned short)11855;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
