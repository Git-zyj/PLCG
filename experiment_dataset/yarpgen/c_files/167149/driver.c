#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11601;
short var_1 = (short)18956;
_Bool var_2 = (_Bool)0;
long long int var_4 = 4039466417336828627LL;
long long int var_5 = -9188052735032657468LL;
unsigned int var_6 = 2305192460U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)175;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
signed char var_19 = (signed char)-123;
unsigned int var_20 = 1436302566U;
unsigned char var_21 = (unsigned char)183;
unsigned long long int var_22 = 5749760600880905957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
