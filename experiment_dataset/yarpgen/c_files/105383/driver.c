#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6731273108600444488LL;
signed char var_3 = (signed char)115;
unsigned int var_8 = 3570736381U;
unsigned int var_13 = 3120674926U;
short var_19 = (short)25282;
int zero = 0;
int var_20 = 616812968;
long long int var_21 = 2495389240309698211LL;
signed char var_22 = (signed char)103;
int var_23 = -1552388810;
unsigned short var_24 = (unsigned short)25481;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
