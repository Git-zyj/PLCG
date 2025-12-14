#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3056;
unsigned long long int var_3 = 11470930196865068598ULL;
short var_4 = (short)25964;
_Bool var_6 = (_Bool)0;
short var_7 = (short)5456;
int zero = 0;
unsigned int var_10 = 3504240067U;
unsigned int var_11 = 2848961310U;
_Bool var_12 = (_Bool)0;
long long int var_13 = -288956845900843758LL;
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
