#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11262;
short var_9 = (short)-25395;
_Bool var_12 = (_Bool)1;
int var_18 = -436877672;
int zero = 0;
int var_19 = -395394179;
long long int var_20 = -2122187707621526616LL;
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
