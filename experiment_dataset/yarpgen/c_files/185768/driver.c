#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
long long int var_4 = 6219462974947805669LL;
long long int var_8 = -844021751602752717LL;
signed char var_15 = (signed char)29;
int zero = 0;
long long int var_18 = -3852396021618131789LL;
long long int var_19 = 2467969484030594892LL;
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
