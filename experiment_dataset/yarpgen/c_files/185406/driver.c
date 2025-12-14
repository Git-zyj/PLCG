#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3255434814866677810ULL;
int var_7 = -833106880;
unsigned long long int var_13 = 7086308227645816278ULL;
unsigned short var_16 = (unsigned short)17040;
int zero = 0;
unsigned long long int var_17 = 632884701533040092ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)29394;
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
