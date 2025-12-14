#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)21;
int var_11 = 60163335;
unsigned long long int var_17 = 7806591109041660109ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1712689750078670384ULL;
short var_20 = (short)25143;
unsigned long long int var_21 = 13513787936018182634ULL;
unsigned long long int var_22 = 18229352092581307870ULL;
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
