#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7304189538643122894LL;
unsigned long long int var_3 = 8697682273548270478ULL;
int var_5 = -1220394576;
int var_8 = -173587330;
long long int var_9 = 6349886435951658723LL;
int var_11 = -1407717590;
int var_12 = -637027856;
unsigned int var_13 = 2622826899U;
signed char var_15 = (signed char)-43;
_Bool var_16 = (_Bool)0;
int var_17 = 854822519;
int zero = 0;
unsigned short var_20 = (unsigned short)57402;
unsigned int var_21 = 2920397399U;
void init() {
}

void checksum() {
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
