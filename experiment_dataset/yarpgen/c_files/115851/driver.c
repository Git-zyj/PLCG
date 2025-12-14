#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3265248874208936122ULL;
unsigned long long int var_1 = 16140463706103161957ULL;
unsigned char var_4 = (unsigned char)252;
unsigned long long int var_6 = 16804365226409910162ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
unsigned int var_12 = 4043448436U;
_Bool var_13 = (_Bool)1;
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
