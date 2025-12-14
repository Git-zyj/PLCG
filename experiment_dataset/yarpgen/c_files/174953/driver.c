#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 344421042;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 4156651362U;
short var_8 = (short)-7162;
unsigned int var_9 = 1471236690U;
unsigned long long int var_11 = 5949667461455415941ULL;
int var_15 = -529499670;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7646423034995566486LL;
void init() {
}

void checksum() {
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
