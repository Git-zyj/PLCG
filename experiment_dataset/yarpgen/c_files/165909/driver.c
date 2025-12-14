#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 11049957195067600740ULL;
unsigned int var_4 = 1276859064U;
unsigned long long int var_9 = 18426779679282813872ULL;
int var_14 = 217226151;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -9847296;
void init() {
}

void checksum() {
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
