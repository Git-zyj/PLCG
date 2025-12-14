#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 714596864;
unsigned long long int var_8 = 9857235365762402320ULL;
short var_11 = (short)-12236;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-31;
unsigned long long int var_14 = 17458809579687008283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
