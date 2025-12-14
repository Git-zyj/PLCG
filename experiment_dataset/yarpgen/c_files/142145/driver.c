#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1642029313;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6489971023351124414LL;
signed char var_5 = (signed char)-104;
unsigned long long int var_8 = 16237399272337262896ULL;
int var_10 = 1797724706;
int zero = 0;
long long int var_13 = 4088046691493574624LL;
long long int var_14 = -6141078281363859882LL;
long long int var_15 = -1378413471358982619LL;
void init() {
}

void checksum() {
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
