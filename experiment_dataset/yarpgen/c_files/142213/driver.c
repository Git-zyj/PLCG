#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_8 = 5343308093417669209LL;
unsigned long long int var_9 = 4955779761075336253ULL;
int zero = 0;
unsigned int var_17 = 3054402984U;
unsigned short var_18 = (unsigned short)57477;
unsigned int var_19 = 3177379993U;
unsigned long long int var_20 = 5316734053787162398ULL;
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
