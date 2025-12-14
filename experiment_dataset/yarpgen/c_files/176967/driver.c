#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10618014757226803532ULL;
unsigned long long int var_5 = 8622558904436291888ULL;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 10543323197201232631ULL;
unsigned long long int var_13 = 15060551882646663917ULL;
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
