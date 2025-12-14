#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7653385263659978154LL;
_Bool var_5 = (_Bool)1;
int var_6 = -1072101273;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-125;
int var_10 = 1789157830;
unsigned long long int var_13 = 11517180730220811313ULL;
int zero = 0;
unsigned int var_14 = 1641647994U;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2613826354240264972LL;
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
