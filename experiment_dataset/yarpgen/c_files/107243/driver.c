#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-77;
unsigned long long int var_6 = 18246092673458162472ULL;
long long int var_7 = 7597818727006368937LL;
int zero = 0;
int var_17 = -1507256429;
unsigned short var_18 = (unsigned short)36951;
long long int var_19 = 8826581486288412224LL;
_Bool var_20 = (_Bool)1;
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
