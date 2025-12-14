#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
unsigned long long int var_2 = 6850797558446378191ULL;
short var_5 = (short)-18877;
short var_9 = (short)17907;
int var_13 = -364407903;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_17 = (short)-1336;
unsigned long long int var_18 = 5421869007305954597ULL;
int var_19 = -118299643;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
