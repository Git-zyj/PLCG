#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
signed char var_1 = (signed char)-56;
unsigned short var_2 = (unsigned short)25163;
unsigned long long int var_3 = 3477390219256485482ULL;
signed char var_8 = (signed char)100;
int zero = 0;
short var_11 = (short)-1684;
int var_12 = 995781285;
void init() {
}

void checksum() {
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
