#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1150557242;
int var_2 = 383626609;
unsigned long long int var_3 = 12753824908553511607ULL;
signed char var_4 = (signed char)100;
unsigned int var_5 = 85294677U;
unsigned int var_6 = 3621358147U;
long long int var_7 = 6290578513232423362LL;
long long int var_8 = -3007006640126773041LL;
int zero = 0;
unsigned char var_11 = (unsigned char)71;
int var_12 = 2144477604;
int var_13 = -1741939387;
_Bool var_14 = (_Bool)0;
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
