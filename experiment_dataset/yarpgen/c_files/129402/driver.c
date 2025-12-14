#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2471399513578355365ULL;
_Bool var_6 = (_Bool)1;
long long int var_12 = 4724548987304309202LL;
int zero = 0;
unsigned short var_19 = (unsigned short)61803;
short var_20 = (short)-16116;
int var_21 = -1629249662;
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
