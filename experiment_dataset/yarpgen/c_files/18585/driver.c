#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9034343826967288726LL;
int var_5 = 1598556011;
long long int var_6 = -4288520248082481318LL;
unsigned long long int var_7 = 10803567627290720925ULL;
int var_8 = -609385417;
unsigned int var_9 = 907692401U;
int var_10 = -60413571;
int zero = 0;
long long int var_12 = -3226603994759623087LL;
short var_13 = (short)28793;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3936739804102608419LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
