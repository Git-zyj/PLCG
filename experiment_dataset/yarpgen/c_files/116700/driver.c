#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2871730147U;
long long int var_4 = 6746735654180015350LL;
long long int var_5 = 5672472892405596082LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 13724048450593918388ULL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 254559207096043259ULL;
signed char var_17 = (signed char)-41;
short var_18 = (short)-27624;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
