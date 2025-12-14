#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26138;
signed char var_2 = (signed char)18;
unsigned short var_3 = (unsigned short)55007;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 2821628155U;
unsigned short var_9 = (unsigned short)6917;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4021589422U;
short var_12 = (short)18070;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
