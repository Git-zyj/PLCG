#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned char var_2 = (unsigned char)77;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)38889;
signed char var_5 = (signed char)109;
unsigned short var_7 = (unsigned short)61139;
signed char var_9 = (signed char)19;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)58586;
int zero = 0;
unsigned char var_12 = (unsigned char)239;
long long int var_13 = 463308330792076506LL;
unsigned char var_14 = (unsigned char)130;
unsigned char var_15 = (unsigned char)212;
unsigned long long int var_16 = 12694533690722262096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
