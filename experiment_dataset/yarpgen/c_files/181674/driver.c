#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21830;
_Bool var_4 = (_Bool)1;
unsigned long long int var_12 = 16282938249614951862ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 9706631872939735947ULL;
unsigned int var_20 = 3990387034U;
unsigned int var_21 = 262676815U;
short var_22 = (short)15308;
_Bool var_23 = (_Bool)1;
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
