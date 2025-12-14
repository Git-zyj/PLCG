#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5684092210593230354ULL;
signed char var_2 = (signed char)-25;
unsigned long long int var_3 = 5751105015312870236ULL;
unsigned long long int var_6 = 10296551042309223362ULL;
signed char var_8 = (signed char)80;
signed char var_10 = (signed char)67;
signed char var_11 = (signed char)38;
unsigned long long int var_14 = 17801207262077096185ULL;
signed char var_17 = (signed char)23;
signed char var_18 = (signed char)10;
int zero = 0;
signed char var_19 = (signed char)5;
signed char var_20 = (signed char)-58;
signed char var_21 = (signed char)125;
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
