#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5096887142482680731LL;
long long int var_1 = 7297559722896569978LL;
unsigned char var_3 = (unsigned char)101;
unsigned char var_4 = (unsigned char)226;
unsigned int var_5 = 3749577826U;
int var_7 = 1407233739;
signed char var_9 = (signed char)-89;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-8075;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
