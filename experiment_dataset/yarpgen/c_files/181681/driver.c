#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43300;
unsigned long long int var_2 = 16157964234646798322ULL;
unsigned char var_3 = (unsigned char)217;
int var_7 = -1333036880;
signed char var_8 = (signed char)-58;
_Bool var_9 = (_Bool)1;
long long int var_11 = -3054395606226325001LL;
signed char var_12 = (signed char)6;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = 7455124775812992692LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
