#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1445206307U;
unsigned long long int var_5 = 414680215866307631ULL;
signed char var_13 = (signed char)-68;
unsigned short var_14 = (unsigned short)43094;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 355525049828173561ULL;
unsigned long long int var_17 = 3294162071184679607ULL;
signed char var_18 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
