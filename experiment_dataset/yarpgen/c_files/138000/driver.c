#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 673396066U;
unsigned int var_1 = 886633300U;
_Bool var_2 = (_Bool)1;
int var_5 = 9427828;
short var_7 = (short)-25629;
signed char var_8 = (signed char)64;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2054163837099910667LL;
long long int var_12 = -5068205104882140652LL;
_Bool var_14 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 17551280263939610109ULL;
unsigned long long int var_20 = 18421648899471566749ULL;
void init() {
}

void checksum() {
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
