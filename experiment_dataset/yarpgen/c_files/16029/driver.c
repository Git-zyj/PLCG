#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
int var_2 = 1993133812;
long long int var_4 = 5861035320176816947LL;
int var_6 = 2005824940;
signed char var_7 = (signed char)72;
int var_9 = 1457208811;
long long int var_10 = 8507078849674222421LL;
unsigned short var_11 = (unsigned short)4843;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -2053047584;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
