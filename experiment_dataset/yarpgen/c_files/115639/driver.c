#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14765;
unsigned long long int var_3 = 18143264895463375953ULL;
unsigned short var_4 = (unsigned short)18507;
int zero = 0;
signed char var_10 = (signed char)-31;
unsigned short var_11 = (unsigned short)43032;
_Bool var_12 = (_Bool)0;
short var_13 = (short)27572;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
