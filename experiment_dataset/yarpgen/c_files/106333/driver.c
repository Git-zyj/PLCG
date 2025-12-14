#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -581825437;
int var_2 = 1053348660;
int var_3 = 1710665928;
int var_8 = -1752658066;
unsigned long long int var_9 = 12558280142902971062ULL;
long long int var_12 = 6686805444643008603LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 3614974575840328374ULL;
signed char var_21 = (signed char)-100;
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
