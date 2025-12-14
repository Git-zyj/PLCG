#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
long long int var_2 = 6602015081371952792LL;
short var_3 = (short)18052;
short var_4 = (short)16871;
int var_5 = 364034450;
short var_6 = (short)-10217;
long long int var_7 = 5799790791550832582LL;
int zero = 0;
int var_11 = 1328697499;
unsigned short var_12 = (unsigned short)60852;
signed char var_13 = (signed char)27;
unsigned int var_14 = 3099111251U;
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
