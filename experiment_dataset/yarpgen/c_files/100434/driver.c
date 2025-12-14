#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)29053;
long long int var_4 = 6490211704601822982LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 4058709190932196162LL;
long long int var_10 = 8263216688995581883LL;
int zero = 0;
unsigned long long int var_11 = 17324646945229678190ULL;
signed char var_12 = (signed char)94;
signed char var_13 = (signed char)80;
void init() {
}

void checksum() {
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
