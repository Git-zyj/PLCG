#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2517442645U;
signed char var_1 = (signed char)31;
unsigned int var_6 = 3303465076U;
short var_7 = (short)-3716;
unsigned long long int var_10 = 16590621544647775859ULL;
int zero = 0;
unsigned long long int var_12 = 5596748097246449115ULL;
short var_13 = (short)5242;
int var_14 = 138850105;
unsigned int var_15 = 2488070896U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
