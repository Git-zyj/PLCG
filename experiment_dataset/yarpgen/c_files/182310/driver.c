#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
short var_4 = (short)-3946;
int var_8 = -1901989479;
unsigned char var_9 = (unsigned char)138;
int var_15 = -1440246566;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 704121718;
unsigned long long int var_20 = 3254344009318826811ULL;
signed char var_21 = (signed char)-98;
void init() {
}

void checksum() {
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
