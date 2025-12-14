#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3447992852157956882LL;
unsigned char var_1 = (unsigned char)174;
long long int var_7 = 3577162781261213105LL;
unsigned int var_8 = 2427880225U;
long long int var_9 = -3229890052948101189LL;
int zero = 0;
signed char var_11 = (signed char)66;
_Bool var_12 = (_Bool)0;
short var_13 = (short)32344;
long long int var_14 = -2897930582987059794LL;
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
