#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
long long int var_5 = -7559572300309923848LL;
int var_6 = -1056305391;
unsigned long long int var_7 = 1126025367213333034ULL;
unsigned int var_8 = 2449392349U;
unsigned int var_9 = 1537588367U;
unsigned long long int var_10 = 17389026743381705677ULL;
int zero = 0;
long long int var_14 = 1446131668192458114LL;
unsigned long long int var_15 = 7983325162073439963ULL;
unsigned long long int var_16 = 386841646644722344ULL;
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
