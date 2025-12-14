#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned char var_1 = (unsigned char)144;
_Bool var_3 = (_Bool)1;
short var_4 = (short)414;
int var_5 = -1307978703;
long long int var_7 = -6348042851273142833LL;
long long int var_8 = 8344565240007638749LL;
int var_11 = 72412250;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7541583744426598703LL;
unsigned long long int var_19 = 15282666041309739655ULL;
long long int var_20 = 2730452729005427263LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
