#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
long long int var_3 = 4346029426627753350LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 16155136301842564692ULL;
int zero = 0;
unsigned int var_15 = 1122766982U;
signed char var_16 = (signed char)-103;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-10290;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
