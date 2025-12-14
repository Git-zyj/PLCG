#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-26404;
unsigned short var_8 = (unsigned short)60985;
_Bool var_9 = (_Bool)0;
long long int var_10 = -3904354798500016661LL;
unsigned short var_15 = (unsigned short)14106;
unsigned short var_16 = (unsigned short)4290;
int zero = 0;
signed char var_17 = (signed char)1;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)16319;
signed char var_20 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
