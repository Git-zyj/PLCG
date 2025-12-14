#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 217099278;
long long int var_3 = -3110179157078131574LL;
long long int var_5 = -6322279047282357521LL;
short var_7 = (short)-24549;
long long int var_9 = -3215376560756140679LL;
unsigned int var_10 = 1408510323U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3156742124U;
int var_14 = -359998257;
void init() {
}

void checksum() {
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
