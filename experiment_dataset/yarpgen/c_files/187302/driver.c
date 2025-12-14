#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3057735790124691490LL;
short var_2 = (short)32448;
unsigned long long int var_3 = 10788007527899046365ULL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-9374;
signed char var_10 = (signed char)83;
int zero = 0;
signed char var_12 = (signed char)-103;
long long int var_13 = -3407425290554348948LL;
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
