#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4022145477880796139ULL;
int var_4 = 279207693;
unsigned short var_6 = (unsigned short)4460;
int var_7 = -1972603322;
long long int var_8 = 4133900811158946939LL;
int var_9 = -901658842;
int zero = 0;
signed char var_10 = (signed char)-1;
unsigned int var_11 = 2280707940U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
