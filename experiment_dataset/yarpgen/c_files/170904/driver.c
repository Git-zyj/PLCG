#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17323698843110218391ULL;
long long int var_3 = -2704113037163648312LL;
unsigned long long int var_4 = 16821793544034401311ULL;
int var_6 = 414093619;
int var_9 = -1170530512;
unsigned long long int var_10 = 6534709841939671791ULL;
short var_11 = (short)-1800;
short var_12 = (short)-12356;
int zero = 0;
short var_16 = (short)-5800;
signed char var_17 = (signed char)-75;
signed char var_18 = (signed char)111;
unsigned int var_19 = 1987047664U;
unsigned long long int var_20 = 11573405374998543207ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
