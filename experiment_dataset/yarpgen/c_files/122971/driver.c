#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 651392107U;
short var_4 = (short)21169;
unsigned char var_5 = (unsigned char)24;
unsigned long long int var_7 = 5920609350798724689ULL;
unsigned long long int var_9 = 13320641612387907976ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4161120136U;
signed char var_12 = (signed char)-83;
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
