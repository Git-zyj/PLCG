#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned long long int var_2 = 265377674266414349ULL;
signed char var_3 = (signed char)-24;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)19;
signed char var_9 = (signed char)60;
short var_10 = (short)-9380;
int zero = 0;
unsigned int var_12 = 3896931703U;
long long int var_13 = -3193082173091144115LL;
unsigned short var_14 = (unsigned short)14466;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
