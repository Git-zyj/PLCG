#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24375;
long long int var_2 = 495949853364022617LL;
int var_7 = -1145643049;
long long int var_10 = -452651701640791161LL;
int zero = 0;
short var_15 = (short)-12839;
short var_16 = (short)-26439;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
