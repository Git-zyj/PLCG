#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8124606951519908465ULL;
short var_1 = (short)-2827;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6083658418090387742LL;
signed char var_4 = (signed char)-27;
unsigned char var_6 = (unsigned char)194;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-102;
signed char var_11 = (signed char)-19;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1153339302U;
int zero = 0;
unsigned int var_14 = 1197510807U;
unsigned long long int var_15 = 10236370701736503366ULL;
void init() {
}

void checksum() {
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
