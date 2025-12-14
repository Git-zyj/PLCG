#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9278512671229084041ULL;
int var_1 = -1722317521;
int var_2 = -1700991287;
unsigned long long int var_4 = 12304826825250088800ULL;
signed char var_6 = (signed char)20;
unsigned short var_7 = (unsigned short)17492;
signed char var_12 = (signed char)-64;
int zero = 0;
unsigned short var_13 = (unsigned short)58066;
unsigned char var_14 = (unsigned char)13;
unsigned long long int var_15 = 16137086369782779491ULL;
unsigned int var_16 = 3275216615U;
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
