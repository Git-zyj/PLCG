#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_4 = -496378777;
unsigned char var_7 = (unsigned char)193;
int var_8 = -309430894;
short var_9 = (short)-22837;
signed char var_10 = (signed char)3;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 9138038753144503637ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-127;
unsigned char var_18 = (unsigned char)128;
long long int var_19 = -938970985780556536LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
