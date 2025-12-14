#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13056868155906073424ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)31850;
unsigned short var_11 = (unsigned short)50844;
int zero = 0;
short var_16 = (short)-19439;
signed char var_17 = (signed char)-70;
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
