#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4210259124433990215LL;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)8;
int zero = 0;
unsigned long long int var_13 = 5940228178707974378ULL;
unsigned long long int var_14 = 10815761757223200452ULL;
short var_15 = (short)-23705;
unsigned long long int var_16 = 9833050138469058950ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
