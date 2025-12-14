#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1098916086978480354LL;
long long int var_2 = -3521973983359796690LL;
unsigned long long int var_4 = 11114104238065160849ULL;
long long int var_7 = 1387354960622499432LL;
long long int var_9 = -7351920100685721862LL;
unsigned char var_15 = (unsigned char)235;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
long long int var_19 = 8726430171967965412LL;
unsigned char var_20 = (unsigned char)113;
void init() {
}

void checksum() {
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
