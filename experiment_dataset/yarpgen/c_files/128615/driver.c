#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8294;
signed char var_2 = (signed char)-27;
short var_4 = (short)-31461;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-25534;
short var_8 = (short)-19839;
signed char var_9 = (signed char)108;
long long int var_10 = 5981277362028666611LL;
unsigned long long int var_11 = 5907389395347647136ULL;
short var_12 = (short)-27845;
int zero = 0;
int var_13 = -464010983;
int var_14 = -852542026;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
