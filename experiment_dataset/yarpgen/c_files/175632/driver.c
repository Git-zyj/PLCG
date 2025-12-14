#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2213272862747973892LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6215005111525013041ULL;
signed char var_5 = (signed char)-75;
long long int var_6 = -2118301077422745987LL;
unsigned long long int var_7 = 3775671732725732301ULL;
int var_8 = 892314238;
int var_9 = -386175398;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned char var_13 = (unsigned char)29;
unsigned long long int var_14 = 11552962042522889618ULL;
void init() {
}

void checksum() {
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
