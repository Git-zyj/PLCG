#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35948;
signed char var_3 = (signed char)-11;
_Bool var_5 = (_Bool)1;
long long int var_7 = -8925255917523738728LL;
unsigned long long int var_13 = 4703470484369712333ULL;
int zero = 0;
signed char var_17 = (signed char)90;
unsigned short var_18 = (unsigned short)27726;
_Bool var_19 = (_Bool)0;
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
