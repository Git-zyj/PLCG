#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3432715227U;
short var_4 = (short)19611;
long long int var_5 = 5005562670380016952LL;
long long int var_8 = 3485667845317985756LL;
unsigned int var_9 = 1613061971U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 7287499385856824663ULL;
short var_15 = (short)4316;
short var_16 = (short)1560;
unsigned int var_17 = 2027431975U;
long long int var_18 = -4057297057503089854LL;
long long int var_19 = 1945014049306249700LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
