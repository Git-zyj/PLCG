#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)53;
short var_11 = (short)16975;
int zero = 0;
int var_20 = 945076614;
long long int var_21 = -3446610242361270861LL;
unsigned long long int var_22 = 1802595672723940418ULL;
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
