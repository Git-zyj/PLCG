#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14194746692384774234ULL;
signed char var_3 = (signed char)40;
unsigned int var_5 = 4169435559U;
unsigned short var_6 = (unsigned short)35993;
unsigned long long int var_11 = 10425842832262054452ULL;
signed char var_12 = (signed char)58;
unsigned int var_14 = 1803161457U;
unsigned long long int var_17 = 17710135261292163966ULL;
signed char var_19 = (signed char)94;
int zero = 0;
short var_20 = (short)23794;
signed char var_21 = (signed char)-123;
unsigned int var_22 = 3650554569U;
unsigned long long int var_23 = 5983403188587473152ULL;
void init() {
}

void checksum() {
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
