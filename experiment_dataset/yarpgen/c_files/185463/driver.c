#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3185604187U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 6194892169058914592ULL;
unsigned int var_8 = 503825650U;
unsigned long long int var_9 = 2997018107499232564ULL;
long long int var_10 = -172273379834308889LL;
unsigned short var_11 = (unsigned short)25717;
short var_14 = (short)-3002;
unsigned int var_15 = 85339822U;
unsigned int var_17 = 335377371U;
int zero = 0;
short var_18 = (short)-21028;
unsigned long long int var_19 = 11875451239610274249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
