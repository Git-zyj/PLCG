#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2510048281U;
unsigned long long int var_3 = 17857354150293856290ULL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 10331284948418569791ULL;
unsigned int var_13 = 2057658412U;
int zero = 0;
unsigned short var_14 = (unsigned short)40892;
long long int var_15 = 1701395709216279876LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
