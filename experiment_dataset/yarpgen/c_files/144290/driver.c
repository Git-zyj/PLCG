#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5991819948698309856LL;
unsigned char var_2 = (unsigned char)221;
unsigned int var_3 = 180348760U;
_Bool var_4 = (_Bool)0;
int var_5 = -1179743513;
long long int var_6 = 1577431223894525672LL;
unsigned int var_7 = 2987628870U;
long long int var_8 = -4941199176754152106LL;
signed char var_10 = (signed char)45;
int zero = 0;
unsigned int var_11 = 1820374554U;
short var_12 = (short)17185;
unsigned int var_13 = 3041727273U;
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
