#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1989746502;
unsigned char var_11 = (unsigned char)92;
unsigned long long int var_13 = 14807246461482318948ULL;
unsigned short var_15 = (unsigned short)22634;
int zero = 0;
short var_18 = (short)-4058;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
