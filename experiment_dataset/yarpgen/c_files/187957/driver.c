#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50970;
unsigned long long int var_2 = 1384157877923496678ULL;
long long int var_8 = 8876996764473055368LL;
unsigned long long int var_9 = 15454466495248211905ULL;
int var_10 = -428359544;
int zero = 0;
unsigned short var_11 = (unsigned short)61394;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
