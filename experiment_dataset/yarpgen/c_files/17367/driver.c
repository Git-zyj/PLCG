#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1685967485;
unsigned short var_2 = (unsigned short)62030;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)57238;
unsigned int var_9 = 279976039U;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)190;
signed char var_17 = (signed char)-33;
unsigned long long int var_19 = 11871498464297127568ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-77;
unsigned int var_22 = 3153016960U;
unsigned short var_23 = (unsigned short)27234;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
