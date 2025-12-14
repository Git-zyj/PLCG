#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11405516454914344688ULL;
long long int var_2 = -3283735504286552206LL;
unsigned long long int var_3 = 16255595575356030379ULL;
short var_6 = (short)-12407;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
unsigned char var_12 = (unsigned char)176;
int var_13 = 217924376;
short var_14 = (short)-29706;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
