#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 1081465010799472931ULL;
unsigned long long int var_4 = 8930714533873500009ULL;
unsigned long long int var_5 = 1564529318726088655ULL;
unsigned int var_7 = 2269905897U;
unsigned int var_10 = 4067442429U;
long long int var_13 = -6815365243613429192LL;
int zero = 0;
short var_18 = (short)-2598;
short var_19 = (short)-25592;
signed char var_20 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
