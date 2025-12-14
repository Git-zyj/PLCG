#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1181468591U;
unsigned char var_4 = (unsigned char)254;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3726983825718656790LL;
unsigned int var_12 = 1500517200U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
