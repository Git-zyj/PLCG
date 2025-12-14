#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24068;
unsigned short var_4 = (unsigned short)18863;
unsigned short var_6 = (unsigned short)19280;
short var_10 = (short)-29800;
unsigned long long int var_11 = 3760181769379881789ULL;
unsigned long long int var_12 = 10857780361937008204ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)24806;
int var_19 = 409718835;
long long int var_20 = 7085592794682354836LL;
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
