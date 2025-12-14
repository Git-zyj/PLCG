#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1093590133657597480LL;
unsigned char var_3 = (unsigned char)174;
long long int var_5 = 6989929274698251984LL;
long long int var_9 = -8796700396886315015LL;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
long long int var_11 = -957400529803324909LL;
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
