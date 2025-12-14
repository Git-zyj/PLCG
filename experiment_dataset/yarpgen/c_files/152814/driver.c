#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)188;
signed char var_2 = (signed char)-46;
long long int var_7 = -153641207495294582LL;
short var_9 = (short)-11229;
long long int var_10 = -3617110234136857634LL;
unsigned int var_11 = 4052207597U;
int zero = 0;
long long int var_12 = -2653930091666697714LL;
signed char var_13 = (signed char)-69;
unsigned short var_14 = (unsigned short)7433;
signed char var_15 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
