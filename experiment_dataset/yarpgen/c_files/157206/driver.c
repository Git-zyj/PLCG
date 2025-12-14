#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43160;
int var_3 = 946135646;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 250229929U;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_13 = 11256260557474861615ULL;
int zero = 0;
int var_18 = 523745758;
_Bool var_19 = (_Bool)0;
long long int var_20 = -6497392109641019213LL;
unsigned long long int var_21 = 8650868999850267642ULL;
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
