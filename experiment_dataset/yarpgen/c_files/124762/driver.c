#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1465;
signed char var_5 = (signed char)25;
unsigned long long int var_6 = 17566291413036685862ULL;
signed char var_12 = (signed char)74;
int zero = 0;
short var_13 = (short)14885;
long long int var_14 = 5643685141945800783LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8479587573639949331LL;
long long int var_17 = -5550258511456594032LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
