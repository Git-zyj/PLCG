#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
unsigned long long int var_4 = 17761905064310442449ULL;
int var_7 = 1423714266;
long long int var_8 = -1236638335361180699LL;
unsigned char var_10 = (unsigned char)195;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1945119112U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4872141551778377110LL;
unsigned long long int var_20 = 16263672558681518854ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
