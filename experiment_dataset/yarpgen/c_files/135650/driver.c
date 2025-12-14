#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
long long int var_1 = 4548750653594784938LL;
unsigned char var_2 = (unsigned char)105;
int var_6 = -1543134033;
unsigned char var_18 = (unsigned char)139;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1633106098;
unsigned int var_21 = 2270179629U;
unsigned long long int var_22 = 3190679321275211387ULL;
void init() {
}

void checksum() {
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
