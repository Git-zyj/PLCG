#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2039389297;
int var_1 = 661300658;
unsigned int var_2 = 2483318925U;
int var_3 = -203124396;
signed char var_4 = (signed char)33;
unsigned int var_5 = 4065688860U;
long long int var_6 = -6202982108165351807LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1024117908U;
unsigned short var_9 = (unsigned short)23878;
int zero = 0;
long long int var_10 = 5462867388434235513LL;
unsigned short var_11 = (unsigned short)35857;
unsigned long long int var_12 = 6272260499008684519ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
