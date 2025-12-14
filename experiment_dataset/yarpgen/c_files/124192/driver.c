#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
signed char var_3 = (signed char)106;
int var_9 = 1678808066;
long long int var_11 = 761614149463076314LL;
unsigned short var_12 = (unsigned short)2099;
signed char var_14 = (signed char)52;
long long int var_16 = 7068146667799061753LL;
signed char var_17 = (signed char)35;
int zero = 0;
unsigned short var_18 = (unsigned short)4455;
int var_19 = -1361849426;
unsigned short var_20 = (unsigned short)43730;
signed char var_21 = (signed char)109;
long long int var_22 = 2093624620533287554LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
