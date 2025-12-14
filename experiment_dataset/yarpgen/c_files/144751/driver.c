#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1519533630214605885LL;
int var_4 = 1228050389;
long long int var_5 = 5365637010422329045LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15448898394396637636ULL;
unsigned char var_10 = (unsigned char)124;
unsigned char var_15 = (unsigned char)211;
short var_16 = (short)32154;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -7035157728738979937LL;
long long int var_21 = -3522748643150793539LL;
unsigned long long int var_22 = 13528399101532153471ULL;
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
