#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1308553314U;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2683942224U;
unsigned long long int var_5 = 7567352437809428983ULL;
int var_7 = -453410595;
unsigned short var_8 = (unsigned short)52555;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)34125;
_Bool var_12 = (_Bool)1;
int var_14 = -146611126;
signed char var_15 = (signed char)113;
signed char var_18 = (signed char)-116;
int zero = 0;
unsigned short var_19 = (unsigned short)11948;
short var_20 = (short)-21216;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)104;
long long int var_23 = 582149800849418675LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
