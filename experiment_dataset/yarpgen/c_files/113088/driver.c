#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46940;
signed char var_7 = (signed char)-113;
_Bool var_8 = (_Bool)1;
long long int var_10 = 8952216715304452479LL;
unsigned long long int var_13 = 1701505830843353472ULL;
unsigned char var_16 = (unsigned char)36;
int zero = 0;
unsigned int var_19 = 3800886723U;
int var_20 = -1314698065;
signed char var_21 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
