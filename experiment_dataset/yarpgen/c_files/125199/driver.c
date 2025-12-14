#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2758461836U;
unsigned int var_1 = 4210566135U;
unsigned int var_2 = 3566565996U;
int var_3 = 262084112;
int var_6 = -342069310;
unsigned int var_8 = 3914915605U;
unsigned int var_9 = 894320471U;
int zero = 0;
unsigned char var_12 = (unsigned char)36;
int var_13 = -1517128067;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
