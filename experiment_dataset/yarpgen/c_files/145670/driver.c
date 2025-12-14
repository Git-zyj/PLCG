#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5438218148690525417ULL;
unsigned char var_5 = (unsigned char)253;
long long int var_6 = 8354085606611572038LL;
long long int var_9 = -3594960426798399702LL;
unsigned char var_10 = (unsigned char)193;
long long int var_13 = -6856687987430317141LL;
int zero = 0;
unsigned long long int var_14 = 9981359547113488874ULL;
long long int var_15 = -8964840934836154161LL;
unsigned long long int var_16 = 8431940092704729620ULL;
void init() {
}

void checksum() {
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
