#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5491450927840158057ULL;
long long int var_2 = -578923278571116735LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_14 = 7024993980129277327ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)28833;
unsigned int var_18 = 1615689913U;
unsigned int var_19 = 264558965U;
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
