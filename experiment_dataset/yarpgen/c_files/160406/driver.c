#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21609;
unsigned short var_9 = (unsigned short)22735;
int var_16 = 112374980;
int zero = 0;
unsigned long long int var_18 = 5557710276307973316ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7081670248118110314ULL;
unsigned int var_21 = 3814971185U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
