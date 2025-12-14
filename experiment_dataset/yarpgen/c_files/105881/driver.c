#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5313776534046322545ULL;
long long int var_7 = 1751663185574121113LL;
unsigned int var_8 = 3063474930U;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned int var_15 = 4031105891U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
