#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 945961889U;
int var_1 = 1912071432;
unsigned long long int var_2 = 4011826529670357202ULL;
unsigned short var_6 = (unsigned short)43512;
long long int var_7 = -4441623110125898779LL;
long long int var_8 = -2526648038103895513LL;
unsigned int var_10 = 1745477850U;
unsigned short var_11 = (unsigned short)10171;
unsigned short var_12 = (unsigned short)28483;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-65;
unsigned int var_15 = 4210282376U;
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
