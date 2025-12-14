#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -2071349346;
unsigned short var_12 = (unsigned short)32572;
long long int var_16 = 8647372621464104484LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 6943080625688345833ULL;
unsigned long long int var_21 = 4513956592626937255ULL;
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
