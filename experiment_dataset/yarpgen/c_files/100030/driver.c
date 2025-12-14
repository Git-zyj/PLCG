#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7599270455976116044LL;
unsigned long long int var_9 = 4446718802941634457ULL;
long long int var_15 = -2124950615599890764LL;
int zero = 0;
long long int var_16 = 4723772334939035118LL;
int var_17 = -380871981;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4826116366401135350ULL;
void init() {
}

void checksum() {
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
