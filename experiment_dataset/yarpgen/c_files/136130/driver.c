#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3030397143026342510ULL;
unsigned long long int var_1 = 10857528379046715763ULL;
signed char var_3 = (signed char)57;
unsigned int var_4 = 59944954U;
unsigned long long int var_6 = 2206820744868261833ULL;
short var_9 = (short)-11770;
int zero = 0;
short var_12 = (short)3115;
signed char var_13 = (signed char)-39;
int var_14 = 806659005;
signed char var_15 = (signed char)21;
unsigned short var_16 = (unsigned short)50124;
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
