#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6072717959670534097LL;
unsigned long long int var_6 = 7145646908642503117ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 368880358;
int var_11 = 1861900874;
long long int var_16 = -7080504630893687003LL;
int zero = 0;
int var_17 = -1329087664;
unsigned int var_18 = 1726971443U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
