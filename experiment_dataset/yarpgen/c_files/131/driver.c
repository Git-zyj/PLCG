#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-40;
_Bool var_3 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11772634463769532822ULL;
long long int var_14 = 8913373714762063345LL;
int zero = 0;
unsigned char var_20 = (unsigned char)176;
unsigned int var_21 = 75485320U;
long long int var_22 = -2448287132852115948LL;
int var_23 = -1740999105;
signed char var_24 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
