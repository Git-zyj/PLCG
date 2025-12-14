#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5705570650601753320ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3084040079U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)31853;
int zero = 0;
signed char var_10 = (signed char)-30;
unsigned short var_11 = (unsigned short)21895;
signed char var_12 = (signed char)-106;
long long int var_13 = -3760292403661251785LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
