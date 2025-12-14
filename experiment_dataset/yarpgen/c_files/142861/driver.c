#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 18084956866607877818ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)113;
long long int var_10 = -8609042662725079602LL;
int zero = 0;
long long int var_11 = 3000756995412562045LL;
unsigned char var_12 = (unsigned char)136;
unsigned short var_13 = (unsigned short)21817;
_Bool var_14 = (_Bool)1;
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
