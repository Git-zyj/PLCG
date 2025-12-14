#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -991361087;
_Bool var_5 = (_Bool)0;
int var_9 = -174126739;
signed char var_14 = (signed char)54;
int zero = 0;
signed char var_19 = (signed char)43;
int var_20 = -591967945;
void init() {
}

void checksum() {
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
