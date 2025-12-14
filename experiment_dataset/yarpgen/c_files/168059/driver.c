#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7243433356043179913LL;
long long int var_2 = 3169128666726594830LL;
long long int var_3 = 235375964429626985LL;
int var_5 = -585600942;
signed char var_6 = (signed char)12;
int var_7 = 483214890;
long long int var_10 = 203675641749320685LL;
int zero = 0;
unsigned long long int var_12 = 2654076992373131533ULL;
unsigned long long int var_13 = 15354984306942357433ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
