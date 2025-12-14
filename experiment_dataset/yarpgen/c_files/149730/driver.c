#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11338064185624043796ULL;
unsigned long long int var_3 = 12261591951804213322ULL;
signed char var_4 = (signed char)-57;
unsigned long long int var_5 = 10015888237463760373ULL;
signed char var_7 = (signed char)-56;
long long int var_8 = 8869074189607580249LL;
unsigned short var_9 = (unsigned short)22153;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-8171;
unsigned long long int var_12 = 10093594462687400980ULL;
unsigned long long int var_13 = 3815521714562796967ULL;
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
