#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1449;
unsigned int var_4 = 1433132182U;
unsigned long long int var_6 = 8923535236221833270ULL;
long long int var_7 = -8138378340102511550LL;
long long int var_8 = 7767246415167807105LL;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
long long int var_18 = 6734880322414430452LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
