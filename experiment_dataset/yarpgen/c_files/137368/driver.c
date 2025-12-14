#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -515441808924858873LL;
signed char var_1 = (signed char)-64;
unsigned short var_6 = (unsigned short)43149;
signed char var_7 = (signed char)-3;
int var_9 = 726032304;
unsigned long long int var_11 = 12691194618772979710ULL;
unsigned int var_13 = 1017462984U;
int var_19 = -624437207;
int zero = 0;
signed char var_20 = (signed char)-75;
long long int var_21 = -3602736930140851843LL;
unsigned short var_22 = (unsigned short)33446;
int var_23 = -1287424426;
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
