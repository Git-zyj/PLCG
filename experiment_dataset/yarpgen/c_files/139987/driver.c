#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21893;
unsigned long long int var_2 = 1456728612152120486ULL;
unsigned long long int var_5 = 12028078012281834926ULL;
signed char var_6 = (signed char)52;
int var_7 = 885352462;
unsigned long long int var_9 = 3302262217203578854ULL;
int var_12 = 1696137628;
unsigned int var_13 = 2052957425U;
int zero = 0;
signed char var_18 = (signed char)-90;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
