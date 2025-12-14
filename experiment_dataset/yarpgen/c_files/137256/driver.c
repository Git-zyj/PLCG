#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17849908100921988982ULL;
short var_11 = (short)9216;
short var_13 = (short)-12362;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 3115337314766000339ULL;
short var_22 = (short)22644;
unsigned short var_23 = (unsigned short)15236;
int var_24 = 594638746;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
