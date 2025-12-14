#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -968901001561553684LL;
unsigned short var_4 = (unsigned short)17725;
unsigned short var_17 = (unsigned short)21433;
int zero = 0;
long long int var_18 = 5730295419081692530LL;
short var_19 = (short)26705;
unsigned short var_20 = (unsigned short)41370;
long long int var_21 = -5098911086565804437LL;
short var_22 = (short)-28515;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
