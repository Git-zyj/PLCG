#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -126684477;
signed char var_8 = (signed char)(-127 - 1);
short var_9 = (short)20281;
unsigned long long int var_11 = 1991013914390587764ULL;
long long int var_12 = -8255238340826992901LL;
signed char var_16 = (signed char)-11;
int zero = 0;
short var_18 = (short)-9371;
long long int var_19 = 2203048332223144492LL;
short var_20 = (short)-3430;
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
