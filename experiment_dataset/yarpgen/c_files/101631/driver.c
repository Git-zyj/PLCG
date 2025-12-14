#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
int var_7 = -366280484;
long long int var_12 = 7496085044932174100LL;
long long int var_13 = -2198979618804837901LL;
long long int var_14 = 3624092403438500340LL;
unsigned int var_16 = 3566262342U;
int zero = 0;
long long int var_17 = -7411376158932354431LL;
long long int var_18 = 9183532397715891370LL;
long long int var_19 = -8504603060910283125LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
