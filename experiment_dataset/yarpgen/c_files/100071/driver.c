#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25087;
unsigned char var_6 = (unsigned char)216;
unsigned int var_9 = 3818664086U;
unsigned char var_10 = (unsigned char)240;
short var_11 = (short)1453;
unsigned int var_12 = 2042877376U;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)181;
void init() {
}

void checksum() {
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
