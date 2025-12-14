#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1593434600;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)56894;
int zero = 0;
unsigned char var_13 = (unsigned char)238;
long long int var_14 = -4540799975584327010LL;
void init() {
}

void checksum() {
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
