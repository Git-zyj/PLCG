#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15170809395321147396ULL;
unsigned int var_11 = 3117683520U;
unsigned long long int var_14 = 1848249188801382304ULL;
unsigned short var_17 = (unsigned short)55673;
int zero = 0;
long long int var_19 = 9058535132958522417LL;
signed char var_20 = (signed char)-20;
unsigned long long int var_21 = 2738225963509274842ULL;
long long int var_22 = 5758421504545644767LL;
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
