#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4095150435U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 851492906371583028ULL;
long long int var_14 = -1335883453472556963LL;
unsigned char var_15 = (unsigned char)155;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 10195276503724672499ULL;
unsigned int var_20 = 3575395019U;
_Bool var_21 = (_Bool)1;
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
