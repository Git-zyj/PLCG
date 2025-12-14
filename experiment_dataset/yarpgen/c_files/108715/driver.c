#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1179302811440330793LL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)54422;
int var_14 = 642429384;
int zero = 0;
long long int var_18 = -7675928603350992482LL;
unsigned long long int var_19 = 18162068139252578058ULL;
void init() {
}

void checksum() {
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
