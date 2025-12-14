#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12206688391048264320ULL;
short var_5 = (short)-7005;
unsigned long long int var_7 = 1287264318366895087ULL;
int var_11 = -213373479;
unsigned char var_19 = (unsigned char)82;
int zero = 0;
long long int var_20 = -421744377666208646LL;
int var_21 = 1877927183;
unsigned long long int var_22 = 16413381549974891662ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
