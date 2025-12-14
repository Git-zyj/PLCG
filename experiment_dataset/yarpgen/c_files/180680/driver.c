#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13970970921452646837ULL;
unsigned char var_1 = (unsigned char)94;
unsigned long long int var_2 = 16283338998085341427ULL;
long long int var_4 = 4343822810851763612LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)209;
unsigned int var_10 = 1389182435U;
short var_11 = (short)-10291;
int zero = 0;
unsigned short var_12 = (unsigned short)61964;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-93;
void init() {
}

void checksum() {
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
