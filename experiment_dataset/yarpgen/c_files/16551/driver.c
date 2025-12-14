#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
short var_2 = (short)-10048;
long long int var_6 = 4812895502629890688LL;
_Bool var_10 = (_Bool)0;
unsigned int var_16 = 1852302855U;
unsigned short var_17 = (unsigned short)45384;
unsigned int var_18 = 3728342259U;
short var_19 = (short)-11272;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)49;
void init() {
}

void checksum() {
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
