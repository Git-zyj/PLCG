#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned long long int var_2 = 280036253557190626ULL;
unsigned long long int var_3 = 3640522884070128384ULL;
signed char var_4 = (signed char)55;
signed char var_9 = (signed char)-51;
unsigned char var_10 = (unsigned char)25;
int var_12 = -1444024257;
int zero = 0;
unsigned long long int var_13 = 2452606301791108534ULL;
unsigned char var_14 = (unsigned char)236;
int var_15 = -1216694431;
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
