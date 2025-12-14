#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 466209338U;
unsigned short var_7 = (unsigned short)20187;
unsigned short var_8 = (unsigned short)46970;
int var_9 = -134707905;
signed char var_11 = (signed char)57;
int zero = 0;
unsigned int var_12 = 2886431361U;
unsigned int var_13 = 923057008U;
unsigned long long int var_14 = 7482515394228957991ULL;
long long int var_15 = -6087077928634423283LL;
unsigned int var_16 = 3990244084U;
long long int var_17 = -8426456172326361060LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
