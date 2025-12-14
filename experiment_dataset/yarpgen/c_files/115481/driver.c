#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1564935004U;
_Bool var_2 = (_Bool)1;
int var_5 = 1423431288;
signed char var_6 = (signed char)-74;
unsigned short var_8 = (unsigned short)53440;
long long int var_11 = 3203952394508705433LL;
unsigned long long int var_12 = 2752799255146231747ULL;
int zero = 0;
int var_14 = 1941135540;
short var_15 = (short)31131;
unsigned short var_16 = (unsigned short)14914;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
