#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21073;
unsigned char var_2 = (unsigned char)217;
unsigned long long int var_3 = 2981035218738889717ULL;
long long int var_5 = 3981007500996178356LL;
unsigned int var_7 = 634177794U;
signed char var_8 = (signed char)-116;
long long int var_10 = -5098883991037501795LL;
unsigned short var_11 = (unsigned short)59772;
unsigned short var_12 = (unsigned short)49666;
unsigned short var_14 = (unsigned short)31594;
int zero = 0;
unsigned int var_15 = 1786506847U;
unsigned int var_16 = 2307126002U;
long long int var_17 = -2227761411787526568LL;
signed char var_18 = (signed char)-4;
int var_19 = 700573023;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
