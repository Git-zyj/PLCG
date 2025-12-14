#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -540031362;
unsigned short var_2 = (unsigned short)26671;
int var_3 = 1463567547;
int var_5 = 1882915303;
unsigned long long int var_7 = 15896234652171753254ULL;
unsigned int var_8 = 3895832643U;
unsigned char var_9 = (unsigned char)37;
unsigned int var_10 = 503494139U;
int zero = 0;
unsigned short var_11 = (unsigned short)44355;
short var_12 = (short)1430;
unsigned short var_13 = (unsigned short)7787;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
