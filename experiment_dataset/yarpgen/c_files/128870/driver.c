#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3385455866U;
unsigned int var_1 = 2037298778U;
unsigned long long int var_4 = 2380053722328522175ULL;
signed char var_5 = (signed char)-21;
unsigned short var_6 = (unsigned short)60511;
unsigned int var_9 = 46241141U;
unsigned int var_12 = 1289033054U;
int zero = 0;
long long int var_13 = 6835396754418923157LL;
unsigned long long int var_14 = 6054777465170584924ULL;
unsigned long long int var_15 = 17443982840467860777ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
