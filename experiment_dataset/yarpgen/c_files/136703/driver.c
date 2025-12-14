#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8126936387144797025LL;
signed char var_1 = (signed char)-120;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1015906911U;
short var_5 = (short)-21036;
signed char var_8 = (signed char)59;
signed char var_9 = (signed char)-61;
unsigned int var_13 = 1456009366U;
signed char var_14 = (signed char)31;
long long int var_16 = -6419587621537421849LL;
int zero = 0;
unsigned int var_18 = 3407497876U;
unsigned long long int var_19 = 13790059599308376910ULL;
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
