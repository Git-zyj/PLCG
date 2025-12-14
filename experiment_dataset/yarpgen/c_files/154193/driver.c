#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15031778419249770747ULL;
int var_2 = -598525995;
long long int var_4 = -6272508228048119932LL;
short var_5 = (short)-1992;
unsigned char var_9 = (unsigned char)6;
unsigned long long int var_10 = 8994380757191128214ULL;
int zero = 0;
int var_12 = -1873145433;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
