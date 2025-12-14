#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4933103472747544036LL;
unsigned char var_3 = (unsigned char)247;
_Bool var_8 = (_Bool)1;
long long int var_9 = -1161813443747277439LL;
int zero = 0;
signed char var_14 = (signed char)-23;
unsigned char var_15 = (unsigned char)117;
int var_16 = 1978749710;
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
