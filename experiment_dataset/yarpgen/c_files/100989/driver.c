#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
int var_3 = -1579193578;
unsigned long long int var_4 = 12493784268747695452ULL;
int var_5 = -388173251;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)14;
long long int var_8 = -4942986599556476095LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1604229128;
int var_11 = 1180019019;
unsigned int var_12 = 344483778U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
