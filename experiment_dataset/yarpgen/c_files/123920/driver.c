#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6048758959135627392LL;
unsigned char var_3 = (unsigned char)12;
unsigned char var_4 = (unsigned char)155;
unsigned long long int var_5 = 15436159239176260738ULL;
unsigned long long int var_7 = 2239067283354631367ULL;
unsigned long long int var_10 = 11254308096299804955ULL;
int zero = 0;
long long int var_14 = -1592649719323361454LL;
unsigned long long int var_15 = 7433494932866579800ULL;
long long int var_16 = 7526807322301790238LL;
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
