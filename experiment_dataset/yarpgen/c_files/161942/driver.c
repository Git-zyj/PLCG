#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64294;
signed char var_1 = (signed char)-12;
long long int var_3 = 5193493072249301670LL;
int var_4 = 231831266;
long long int var_5 = 5112196647661933258LL;
long long int var_6 = -8281752912064956593LL;
long long int var_7 = -8787453610760463007LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 121375602847789083LL;
long long int var_11 = -2639476225670676232LL;
int zero = 0;
unsigned short var_12 = (unsigned short)19063;
long long int var_13 = 4409020395137436766LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
