#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2143357581U;
unsigned short var_1 = (unsigned short)37458;
signed char var_2 = (signed char)-116;
int var_3 = -976457779;
unsigned short var_4 = (unsigned short)64079;
short var_5 = (short)-17754;
unsigned int var_6 = 3903882794U;
signed char var_7 = (signed char)20;
short var_8 = (short)-5803;
short var_9 = (short)-12897;
long long int var_10 = -3760496726557270353LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)37;
int var_13 = 1167585565;
unsigned int var_14 = 3843250443U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
