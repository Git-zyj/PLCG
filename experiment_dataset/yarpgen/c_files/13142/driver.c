#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4408;
short var_1 = (short)-637;
unsigned int var_4 = 1091986850U;
long long int var_6 = -8916771983963236443LL;
unsigned int var_7 = 634608793U;
short var_8 = (short)-16330;
unsigned short var_9 = (unsigned short)11705;
int var_10 = 1502209193;
int var_13 = -1632534825;
signed char var_16 = (signed char)84;
int zero = 0;
unsigned int var_17 = 682138792U;
long long int var_18 = 5256546772157040953LL;
signed char var_19 = (signed char)41;
long long int var_20 = -5639063619356170031LL;
signed char var_21 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
