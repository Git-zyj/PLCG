#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31352;
short var_2 = (short)4679;
long long int var_8 = 8207388466009918774LL;
short var_9 = (short)-9815;
int zero = 0;
short var_10 = (short)-4115;
short var_11 = (short)1060;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
