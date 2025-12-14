#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41855;
_Bool var_3 = (_Bool)0;
long long int var_9 = -8573321780771968435LL;
unsigned int var_10 = 3486035218U;
int zero = 0;
unsigned short var_11 = (unsigned short)61217;
long long int var_12 = 4602125764268199565LL;
unsigned char var_13 = (unsigned char)135;
_Bool var_14 = (_Bool)1;
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
