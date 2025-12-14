#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
unsigned char var_2 = (unsigned char)154;
_Bool var_3 = (_Bool)0;
int var_4 = -666953761;
unsigned short var_8 = (unsigned short)45963;
int zero = 0;
long long int var_12 = -3756714886208956399LL;
unsigned short var_13 = (unsigned short)47218;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
