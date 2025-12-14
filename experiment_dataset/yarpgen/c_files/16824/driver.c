#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1547697154583928791LL;
int var_2 = -98613552;
unsigned int var_5 = 3150856906U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 10652963631129039797ULL;
int var_9 = -450713254;
short var_10 = (short)-13041;
int zero = 0;
long long int var_12 = 2274289553844843157LL;
long long int var_13 = -4718083308074922006LL;
long long int var_14 = -7817156237501368945LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
