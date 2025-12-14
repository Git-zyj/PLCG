#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1924347678U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 4067544383U;
long long int var_3 = 2838103299755199713LL;
short var_6 = (short)16274;
short var_9 = (short)13043;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3245135360U;
unsigned long long int var_13 = 8391590253418636110ULL;
unsigned int var_14 = 3434704372U;
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
