#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1601531280272968839ULL;
long long int var_3 = 1833604665474562072LL;
long long int var_8 = 3678266276506969427LL;
unsigned long long int var_9 = 4533577924159789993ULL;
unsigned int var_13 = 3880554711U;
int var_17 = -1426270368;
int zero = 0;
int var_19 = -56931022;
int var_20 = -1823316536;
signed char var_21 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
