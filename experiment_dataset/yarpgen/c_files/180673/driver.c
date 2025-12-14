#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16719;
unsigned int var_8 = 3213821299U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)111;
_Bool var_12 = (_Bool)0;
short var_15 = (short)-103;
signed char var_17 = (signed char)-107;
unsigned long long int var_18 = 1160003559817076133ULL;
int zero = 0;
signed char var_20 = (signed char)118;
int var_21 = -676119406;
short var_22 = (short)11855;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
