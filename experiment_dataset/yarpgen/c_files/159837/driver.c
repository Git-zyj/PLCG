#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)84;
signed char var_6 = (signed char)-93;
int var_7 = 1118081277;
unsigned long long int var_10 = 1743056566961420854ULL;
unsigned int var_11 = 3098810800U;
signed char var_13 = (signed char)96;
int zero = 0;
int var_15 = 357915284;
unsigned int var_16 = 2006131685U;
_Bool var_17 = (_Bool)1;
int var_18 = 1037405917;
unsigned char var_19 = (unsigned char)141;
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
