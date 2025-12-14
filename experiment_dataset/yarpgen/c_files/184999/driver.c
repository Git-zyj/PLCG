#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_12 = 11953848447076838590ULL;
unsigned char var_17 = (unsigned char)157;
int zero = 0;
signed char var_18 = (signed char)-63;
unsigned long long int var_19 = 9463357235766877025ULL;
int var_20 = -429936761;
unsigned long long int var_21 = 4663025738398869322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
