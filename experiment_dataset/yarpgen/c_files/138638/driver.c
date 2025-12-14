#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5823964618700382077LL;
short var_2 = (short)25160;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 2669011774172374736ULL;
long long int var_5 = 7203773310896569381LL;
long long int var_7 = 7613594962118568012LL;
int var_8 = -58927228;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1697516205U;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)69;
signed char var_13 = (signed char)51;
unsigned char var_14 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
