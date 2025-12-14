#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 16468418046502592475ULL;
unsigned int var_2 = 1549890908U;
int var_3 = 1062733554;
_Bool var_4 = (_Bool)1;
int var_5 = -610311888;
unsigned long long int var_6 = 9585082424856400436ULL;
int var_7 = 991791647;
int var_8 = 1274710738;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 12678829671758142500ULL;
signed char var_11 = (signed char)68;
long long int var_12 = -4924590505446253235LL;
signed char var_13 = (signed char)-50;
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
