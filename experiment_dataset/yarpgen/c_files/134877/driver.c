#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52730;
unsigned int var_6 = 3487737788U;
long long int var_8 = 8541795389600125719LL;
short var_9 = (short)-1441;
unsigned long long int var_11 = 3879160330303194268ULL;
long long int var_12 = -8450240102015518837LL;
int zero = 0;
short var_19 = (short)12958;
unsigned int var_20 = 38665720U;
long long int var_21 = -6966433630983637722LL;
signed char var_22 = (signed char)43;
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
