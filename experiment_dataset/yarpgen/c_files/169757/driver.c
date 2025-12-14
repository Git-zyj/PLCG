#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
int var_4 = 1822171010;
unsigned int var_5 = 148795024U;
signed char var_6 = (signed char)32;
int var_7 = -197868113;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11872961792873815445ULL;
unsigned long long int var_12 = 4149837171365633072ULL;
unsigned long long int var_13 = 8264667530197836773ULL;
signed char var_14 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
