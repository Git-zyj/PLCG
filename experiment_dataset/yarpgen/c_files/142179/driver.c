#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1186284839;
unsigned int var_4 = 2077490509U;
unsigned int var_5 = 4040529199U;
signed char var_6 = (signed char)-126;
unsigned long long int var_8 = 1244593923513409981ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 15807527573244011005ULL;
unsigned int var_13 = 2588148307U;
int zero = 0;
long long int var_16 = -2621530250064984101LL;
short var_17 = (short)-11841;
unsigned long long int var_18 = 9687315122705351621ULL;
signed char var_19 = (signed char)-27;
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
