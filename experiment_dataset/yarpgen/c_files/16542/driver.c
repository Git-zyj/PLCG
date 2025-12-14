#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9707665973650435194ULL;
signed char var_9 = (signed char)(-127 - 1);
unsigned int var_10 = 1792954189U;
short var_13 = (short)-13800;
int zero = 0;
unsigned int var_19 = 2563070759U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8325977709175693324LL;
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
