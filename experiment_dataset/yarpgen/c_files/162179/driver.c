#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2274712617U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)58387;
_Bool var_6 = (_Bool)0;
int var_9 = 104309725;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1456485314048660069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
