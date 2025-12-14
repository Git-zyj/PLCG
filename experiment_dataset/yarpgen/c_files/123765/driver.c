#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1639183897;
short var_2 = (short)-11099;
unsigned char var_4 = (unsigned char)103;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)115;
int zero = 0;
int var_10 = 1125739537;
int var_11 = -755186070;
unsigned long long int var_12 = 6482682173823508546ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
