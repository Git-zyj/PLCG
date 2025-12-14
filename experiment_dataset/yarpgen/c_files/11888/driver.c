#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2861830705761851477LL;
int var_5 = 871925097;
unsigned char var_6 = (unsigned char)1;
unsigned char var_7 = (unsigned char)144;
int var_8 = -1989910854;
int var_10 = -82957856;
unsigned short var_13 = (unsigned short)4847;
short var_14 = (short)18307;
int zero = 0;
signed char var_15 = (signed char)-73;
unsigned char var_16 = (unsigned char)58;
long long int var_17 = 4245909162406974976LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
