#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
int var_1 = -127534388;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)14;
int var_4 = -397800446;
unsigned char var_5 = (unsigned char)85;
long long int var_7 = -2868157444998617960LL;
signed char var_8 = (signed char)107;
int zero = 0;
unsigned int var_10 = 4284806753U;
unsigned long long int var_11 = 3122289990919066616ULL;
unsigned long long int var_12 = 10870251331814123487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
