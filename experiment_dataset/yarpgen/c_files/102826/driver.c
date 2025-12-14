#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3604431696285012495ULL;
unsigned long long int var_2 = 14893384321459287713ULL;
short var_4 = (short)-20665;
short var_9 = (short)14890;
long long int var_14 = -9119072102503668829LL;
unsigned int var_15 = 2785329759U;
signed char var_16 = (signed char)-4;
int zero = 0;
signed char var_17 = (signed char)-127;
signed char var_18 = (signed char)-21;
unsigned char var_19 = (unsigned char)138;
signed char var_20 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
