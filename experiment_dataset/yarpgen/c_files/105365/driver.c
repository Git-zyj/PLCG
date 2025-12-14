#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16146573529498545428ULL;
long long int var_2 = 1113185549252288880LL;
unsigned long long int var_4 = 12826080250120244240ULL;
unsigned long long int var_5 = 16066844833229432052ULL;
short var_8 = (short)-999;
int zero = 0;
short var_12 = (short)-27264;
unsigned long long int var_13 = 10542294542498175516ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
