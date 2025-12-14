#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16181673214151477246ULL;
unsigned long long int var_3 = 5578115381582497171ULL;
unsigned char var_5 = (unsigned char)60;
unsigned long long int var_12 = 80572007708130568ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2641235788U;
unsigned long long int var_15 = 4569990960162264732ULL;
long long int var_16 = 7666542968144448613LL;
unsigned int var_17 = 2172506783U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
