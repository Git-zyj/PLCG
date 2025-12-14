#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7444093816324287674LL;
unsigned char var_2 = (unsigned char)70;
signed char var_3 = (signed char)44;
unsigned char var_4 = (unsigned char)89;
short var_6 = (short)-22479;
unsigned int var_9 = 2996854705U;
short var_11 = (short)-28483;
unsigned int var_12 = 646930012U;
int zero = 0;
unsigned char var_17 = (unsigned char)180;
short var_18 = (short)-28835;
long long int var_19 = 4925628772515161109LL;
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
