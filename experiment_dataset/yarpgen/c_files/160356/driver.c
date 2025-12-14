#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43625;
unsigned short var_1 = (unsigned short)62746;
short var_2 = (short)-15357;
unsigned long long int var_3 = 6035185477946477593ULL;
unsigned int var_4 = 3781540513U;
long long int var_8 = 1484623084723073988LL;
short var_9 = (short)-26817;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1964661673U;
short var_13 = (short)19165;
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
