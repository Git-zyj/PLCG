#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
int var_5 = -1750118217;
unsigned long long int var_7 = 1403952529167639672ULL;
signed char var_9 = (signed char)-55;
int zero = 0;
unsigned short var_10 = (unsigned short)20326;
unsigned char var_11 = (unsigned char)156;
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
