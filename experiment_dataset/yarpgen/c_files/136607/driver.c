#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4687716283999040773LL;
short var_6 = (short)-26449;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_19 = -4114453109985122564LL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-31116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
