#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18292668590212168549ULL;
unsigned long long int var_1 = 12733262132253471007ULL;
short var_2 = (short)-2533;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3306519839864200197LL;
unsigned char var_8 = (unsigned char)25;
short var_9 = (short)-9640;
int zero = 0;
long long int var_12 = 8722413469169170728LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
