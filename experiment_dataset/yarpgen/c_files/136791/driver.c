#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -130754555;
int var_2 = -560172612;
int var_3 = 1955613197;
int var_5 = -1395152385;
int var_9 = -1028328816;
signed char var_10 = (signed char)-112;
int var_14 = 908713805;
int zero = 0;
signed char var_16 = (signed char)-77;
int var_17 = 1234742591;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
