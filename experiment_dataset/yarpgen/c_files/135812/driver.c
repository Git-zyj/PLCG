#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18407554687081105968ULL;
unsigned short var_6 = (unsigned short)14889;
int var_7 = -1274620583;
long long int var_9 = 5529217141199858777LL;
_Bool var_11 = (_Bool)0;
long long int var_15 = -8007815071092968435LL;
int zero = 0;
int var_18 = 2075056629;
int var_19 = 1657185611;
unsigned int var_20 = 2908844187U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
