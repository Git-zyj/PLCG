#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-4908;
short var_5 = (short)22521;
unsigned long long int var_8 = 9027052187967898110ULL;
short var_12 = (short)4837;
int zero = 0;
short var_19 = (short)14376;
short var_20 = (short)26952;
int var_21 = 1481829302;
short var_22 = (short)-27722;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
