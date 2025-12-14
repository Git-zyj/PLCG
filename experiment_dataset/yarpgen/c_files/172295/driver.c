#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18377;
_Bool var_1 = (_Bool)1;
int var_3 = 1202828629;
unsigned int var_4 = 752525443U;
short var_5 = (short)16366;
long long int var_6 = -4041249500283282722LL;
long long int var_8 = -189289657883302030LL;
long long int var_9 = -3285000296816440827LL;
int zero = 0;
long long int var_10 = -2822695134020847045LL;
long long int var_11 = -8733556412767487911LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
