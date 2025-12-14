#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 318826748;
unsigned char var_1 = (unsigned char)33;
short var_3 = (short)10218;
unsigned char var_4 = (unsigned char)18;
unsigned long long int var_5 = 4831647924887170805ULL;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
signed char var_10 = (signed char)-120;
_Bool var_11 = (_Bool)0;
int var_12 = -587172200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
