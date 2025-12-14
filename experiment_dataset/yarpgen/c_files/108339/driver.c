#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8173503934647969857ULL;
unsigned long long int var_2 = 1629340080310726018ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 16962999717492057309ULL;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)4;
unsigned long long int var_13 = 224258692724014087ULL;
unsigned long long int var_14 = 8459494963069919933ULL;
int zero = 0;
unsigned long long int var_18 = 8088954205458880471ULL;
unsigned long long int var_19 = 1831479984919208240ULL;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
