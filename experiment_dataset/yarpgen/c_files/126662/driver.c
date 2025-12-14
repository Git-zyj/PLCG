#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
unsigned int var_2 = 1840585752U;
long long int var_6 = 7980997155927164861LL;
_Bool var_8 = (_Bool)0;
long long int var_14 = -7822413334524071011LL;
int zero = 0;
unsigned char var_16 = (unsigned char)103;
unsigned int var_17 = 3426109660U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
