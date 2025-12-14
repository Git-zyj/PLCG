#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 586355863U;
unsigned int var_1 = 1493239345U;
signed char var_2 = (signed char)-81;
signed char var_3 = (signed char)-115;
short var_4 = (short)-31864;
signed char var_6 = (signed char)-51;
unsigned long long int var_7 = 1961844712398244663ULL;
int var_9 = 1882339149;
long long int var_12 = 7170699249435345591LL;
int zero = 0;
unsigned int var_13 = 337039486U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3245558224U;
short var_16 = (short)-19923;
long long int var_17 = -4276398505858286874LL;
short var_18 = (short)-11183;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
