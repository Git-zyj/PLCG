#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3634548495341263204LL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 8265069527422642652LL;
unsigned long long int var_9 = 8500833762725496861ULL;
long long int var_10 = -4098721385998811819LL;
signed char var_12 = (signed char)-79;
int zero = 0;
unsigned int var_13 = 2488780189U;
unsigned short var_14 = (unsigned short)11407;
long long int var_15 = 1419737645691232545LL;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
