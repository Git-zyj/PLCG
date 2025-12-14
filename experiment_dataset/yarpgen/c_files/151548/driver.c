#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8825972504899888323ULL;
unsigned long long int var_5 = 5299246681662616382ULL;
unsigned long long int var_6 = 11246344960311936593ULL;
unsigned long long int var_8 = 16481674501016834256ULL;
unsigned long long int var_15 = 11530649364176264147ULL;
int zero = 0;
unsigned long long int var_19 = 5236330266741473907ULL;
unsigned long long int var_20 = 2594622863232519594ULL;
unsigned long long int var_21 = 5118397014811816568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
