#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4637;
long long int var_7 = -2754182480498292842LL;
long long int var_11 = -8288105417982830942LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -356456403108746149LL;
void init() {
}

void checksum() {
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
