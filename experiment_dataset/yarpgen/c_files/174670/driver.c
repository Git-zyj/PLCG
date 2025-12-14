#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11157551504182573653ULL;
_Bool var_4 = (_Bool)0;
int var_5 = -643937128;
unsigned int var_6 = 1707890003U;
signed char var_7 = (signed char)-72;
int zero = 0;
unsigned int var_10 = 1812048878U;
unsigned int var_11 = 3866758687U;
long long int var_12 = -8270233015721540078LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
