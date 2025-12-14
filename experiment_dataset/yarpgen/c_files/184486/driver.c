#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14841171680108362328ULL;
unsigned int var_3 = 3481285937U;
unsigned int var_4 = 2635097565U;
signed char var_5 = (signed char)-64;
signed char var_9 = (signed char)97;
unsigned long long int var_11 = 8236288606331823793ULL;
int zero = 0;
int var_13 = 1740461737;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)8;
unsigned long long int var_16 = 7244465738871005711ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
