#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6035004405749040153LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4845795639528427708ULL;
long long int var_9 = 3971484706535729541LL;
int var_15 = -1310116130;
int zero = 0;
unsigned long long int var_17 = 5022027085735675834ULL;
int var_18 = -42356872;
unsigned char var_19 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
