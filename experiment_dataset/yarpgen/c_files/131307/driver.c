#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7959918972855691153ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 15200360273164834557ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10168356202305250624ULL;
unsigned long long int var_18 = 14834701778214690001ULL;
short var_19 = (short)19087;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
