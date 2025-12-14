#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 411623648;
long long int var_7 = 9083593379074220432LL;
unsigned long long int var_8 = 9406405080721107608ULL;
unsigned int var_9 = 532505791U;
int var_10 = 619443207;
signed char var_12 = (signed char)58;
unsigned long long int var_14 = 10269868014941941332ULL;
long long int var_15 = -8495133416126799501LL;
unsigned long long int var_16 = 14228362462853224821ULL;
int zero = 0;
short var_17 = (short)32582;
unsigned short var_18 = (unsigned short)9331;
unsigned char var_19 = (unsigned char)194;
signed char var_20 = (signed char)-26;
int var_21 = -1006760390;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
