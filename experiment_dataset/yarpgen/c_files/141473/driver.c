#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17729051369662775330ULL;
int var_2 = -1394839274;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 3173408531U;
unsigned int var_13 = 3059443851U;
int zero = 0;
long long int var_15 = -2585792454601780232LL;
long long int var_16 = -6535654390630333563LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)16;
void init() {
}

void checksum() {
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
