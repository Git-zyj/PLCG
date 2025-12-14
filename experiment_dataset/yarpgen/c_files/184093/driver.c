#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12059766957959453447ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1279405491U;
unsigned long long int var_10 = 5228611177725589856ULL;
int var_14 = -1849057770;
long long int var_16 = -4844353137692495933LL;
int zero = 0;
long long int var_19 = -4602184717645964122LL;
unsigned long long int var_20 = 12663166728550993998ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-19479;
short var_23 = (short)-4381;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
