#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 637849709;
unsigned short var_1 = (unsigned short)15193;
signed char var_4 = (signed char)96;
int var_5 = -532635937;
unsigned short var_6 = (unsigned short)13651;
_Bool var_7 = (_Bool)0;
short var_8 = (short)28313;
unsigned int var_9 = 1889713587U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1920726636233172583ULL;
long long int var_12 = 8890640660989255697LL;
signed char var_13 = (signed char)111;
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
