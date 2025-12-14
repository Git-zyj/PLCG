#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2166470049294933384ULL;
signed char var_3 = (signed char)-10;
unsigned char var_4 = (unsigned char)119;
unsigned long long int var_8 = 13523345398757027987ULL;
unsigned long long int var_9 = 16246480588567811053ULL;
short var_10 = (short)-4873;
unsigned int var_13 = 1466406410U;
long long int var_15 = 5992524079819730510LL;
int zero = 0;
unsigned long long int var_19 = 10457277459193051226ULL;
long long int var_20 = -1684188860244122744LL;
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
