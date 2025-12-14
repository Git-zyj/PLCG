#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53628;
int var_3 = -1085817591;
signed char var_9 = (signed char)28;
unsigned char var_14 = (unsigned char)228;
int zero = 0;
long long int var_19 = 802863527712098331LL;
long long int var_20 = 6622798105994133276LL;
void init() {
}

void checksum() {
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
