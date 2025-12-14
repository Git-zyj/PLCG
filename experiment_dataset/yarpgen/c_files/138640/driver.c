#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5462519385450595839LL;
long long int var_7 = -2590507677025839974LL;
unsigned int var_9 = 2897995324U;
_Bool var_10 = (_Bool)1;
long long int var_12 = 5088374564318236160LL;
int zero = 0;
unsigned short var_13 = (unsigned short)59523;
unsigned short var_14 = (unsigned short)53356;
unsigned short var_15 = (unsigned short)52968;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
