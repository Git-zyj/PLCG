#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3591307181U;
unsigned long long int var_3 = 18014978830885531936ULL;
unsigned short var_5 = (unsigned short)13007;
unsigned int var_7 = 3283402847U;
int var_11 = -1246614684;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 141235788;
signed char var_14 = (signed char)36;
void init() {
}

void checksum() {
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
