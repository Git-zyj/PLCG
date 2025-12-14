#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1980787246U;
_Bool var_2 = (_Bool)1;
long long int var_3 = -2432598286796368788LL;
signed char var_4 = (signed char)94;
unsigned int var_6 = 3422064728U;
_Bool var_7 = (_Bool)1;
long long int var_9 = 5833321731554633624LL;
int zero = 0;
unsigned long long int var_10 = 8095657495219446258ULL;
unsigned int var_11 = 1875605575U;
unsigned long long int var_12 = 4597010315699483409ULL;
unsigned short var_13 = (unsigned short)45241;
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
