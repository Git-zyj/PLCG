#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 289308202;
signed char var_1 = (signed char)-112;
long long int var_2 = -7383726028681827434LL;
long long int var_3 = -7685540765824408724LL;
unsigned short var_6 = (unsigned short)42116;
signed char var_13 = (signed char)9;
_Bool var_15 = (_Bool)0;
unsigned long long int var_18 = 15221102687274422670ULL;
int zero = 0;
int var_19 = 809905403;
signed char var_20 = (signed char)-42;
void init() {
}

void checksum() {
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
