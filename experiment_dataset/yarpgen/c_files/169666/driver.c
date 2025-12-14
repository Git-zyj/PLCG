#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46900;
short var_1 = (short)-10967;
int var_2 = -271473841;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-51;
short var_5 = (short)8626;
short var_6 = (short)24349;
short var_7 = (short)-27252;
unsigned char var_8 = (unsigned char)240;
unsigned long long int var_9 = 10425560071866130275ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)19957;
int var_13 = 912392283;
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
