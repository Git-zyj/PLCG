#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9192425575919691990LL;
unsigned short var_1 = (unsigned short)50939;
int var_5 = 97687670;
unsigned int var_7 = 3686261786U;
int var_9 = 1045095955;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6585051896363308011ULL;
long long int var_12 = -8970305633682296976LL;
int var_13 = -1113768600;
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
