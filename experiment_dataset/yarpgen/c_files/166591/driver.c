#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1291483090;
unsigned short var_4 = (unsigned short)34572;
long long int var_8 = 993040132162484251LL;
short var_12 = (short)-21644;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -875567021;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
