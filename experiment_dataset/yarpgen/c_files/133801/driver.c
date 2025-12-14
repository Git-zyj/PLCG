#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
unsigned short var_5 = (unsigned short)31894;
unsigned long long int var_6 = 16616740952143423938ULL;
unsigned char var_10 = (unsigned char)48;
int zero = 0;
long long int var_18 = -1052799206315285491LL;
unsigned long long int var_19 = 4537081590246830652ULL;
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
