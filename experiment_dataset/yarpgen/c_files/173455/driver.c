#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1222949090;
unsigned long long int var_3 = 15020473935391980185ULL;
unsigned short var_4 = (unsigned short)25790;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)99;
signed char var_8 = (signed char)73;
signed char var_9 = (signed char)-46;
long long int var_12 = -9100908807122891111LL;
short var_13 = (short)10033;
int zero = 0;
short var_14 = (short)-19216;
unsigned int var_15 = 622543289U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
