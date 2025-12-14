#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2009955571852823382LL;
unsigned int var_4 = 2386643407U;
short var_6 = (short)-26912;
unsigned short var_9 = (unsigned short)44585;
unsigned long long int var_11 = 16577187034867082781ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)21282;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
