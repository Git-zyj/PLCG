#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5094007477979440544LL;
unsigned short var_5 = (unsigned short)61189;
int var_7 = 1380926895;
unsigned int var_9 = 776371754U;
signed char var_12 = (signed char)36;
_Bool var_15 = (_Bool)1;
int var_19 = 834183258;
int zero = 0;
unsigned short var_20 = (unsigned short)53653;
unsigned char var_21 = (unsigned char)74;
int var_22 = 1014181007;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
