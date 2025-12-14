#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2170394775431777318LL;
_Bool var_14 = (_Bool)0;
long long int var_16 = 4586430264573471086LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)-20839;
unsigned char var_19 = (unsigned char)142;
signed char var_20 = (signed char)-106;
long long int var_21 = 3452623939932618022LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
