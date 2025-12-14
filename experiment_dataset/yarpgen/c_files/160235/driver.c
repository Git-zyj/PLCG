#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)8161;
unsigned long long int var_15 = 15756436887670450990ULL;
unsigned short var_17 = (unsigned short)1710;
int zero = 0;
long long int var_19 = -458096443781100871LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13842772215535566914ULL;
unsigned short var_22 = (unsigned short)53052;
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
