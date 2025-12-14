#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33205;
long long int var_1 = 1486045412143146063LL;
unsigned long long int var_2 = 6914432002982201860ULL;
unsigned int var_3 = 527348930U;
unsigned short var_8 = (unsigned short)16118;
short var_9 = (short)16389;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 9021370647864668529ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8151316863634149631LL;
signed char var_14 = (signed char)-35;
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
