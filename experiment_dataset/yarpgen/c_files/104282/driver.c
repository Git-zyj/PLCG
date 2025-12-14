#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-3;
short var_5 = (short)-1863;
unsigned long long int var_6 = 16183621982453185282ULL;
unsigned int var_7 = 2678474957U;
signed char var_8 = (signed char)-45;
unsigned long long int var_9 = 4227663316501720749ULL;
int zero = 0;
long long int var_11 = 2056459872377953413LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
