#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1922984728;
unsigned long long int var_3 = 9047307831812402555ULL;
int var_6 = 641722871;
long long int var_8 = 3994074495782427556LL;
long long int var_9 = 722595193973945148LL;
unsigned long long int var_10 = 12663616707060092396ULL;
int zero = 0;
long long int var_11 = 6250029038733411962LL;
long long int var_12 = -2246393634420238054LL;
long long int var_13 = 4433380053693617541LL;
long long int var_14 = -563923895709489027LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
