#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-93;
unsigned char var_2 = (unsigned char)97;
unsigned char var_3 = (unsigned char)211;
long long int var_4 = 5386079233041524172LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)55648;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
long long int var_10 = -1929623459110959173LL;
unsigned int var_11 = 4020261372U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)29119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
