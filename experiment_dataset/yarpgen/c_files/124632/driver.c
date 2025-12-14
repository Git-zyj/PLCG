#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -732031056;
long long int var_5 = 8980346813097375575LL;
unsigned long long int var_8 = 6939571543119091643ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 4112141891U;
unsigned short var_16 = (unsigned short)7180;
void init() {
}

void checksum() {
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
