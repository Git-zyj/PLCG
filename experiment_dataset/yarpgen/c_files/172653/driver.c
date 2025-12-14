#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61858;
signed char var_2 = (signed char)-52;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 16620256543086846951ULL;
short var_9 = (short)-29321;
signed char var_10 = (signed char)-75;
unsigned int var_11 = 3574271252U;
unsigned int var_14 = 3027135470U;
unsigned char var_19 = (unsigned char)91;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
