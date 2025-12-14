#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3721465155U;
long long int var_7 = 2671458860897599699LL;
int var_8 = 2053603075;
unsigned long long int var_10 = 9409233454243958347ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 4590256525200405366ULL;
int var_15 = -66700803;
unsigned int var_16 = 2314458123U;
int zero = 0;
int var_17 = -392140309;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2655037369436128137LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
