#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38803;
unsigned int var_7 = 782075296U;
long long int var_8 = 5070840053405337951LL;
signed char var_11 = (signed char)17;
unsigned int var_13 = 501370440U;
int var_14 = 336520426;
short var_17 = (short)20043;
int zero = 0;
int var_19 = 229438343;
signed char var_20 = (signed char)-99;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3570234082872090632LL;
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
