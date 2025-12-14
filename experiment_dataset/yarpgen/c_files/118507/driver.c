#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1310;
long long int var_1 = 2935590585327645235LL;
int var_2 = 978499929;
signed char var_3 = (signed char)-125;
long long int var_6 = 3823328595874898590LL;
long long int var_9 = 2120276083814017672LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -1261044574;
short var_12 = (short)-9224;
int var_13 = 52223603;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
