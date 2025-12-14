#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19263;
unsigned short var_2 = (unsigned short)3020;
unsigned short var_3 = (unsigned short)50534;
unsigned int var_4 = 3920554485U;
int var_5 = -1701717797;
unsigned int var_6 = 1012706887U;
unsigned long long int var_8 = 9355567865019104776ULL;
signed char var_10 = (signed char)104;
int zero = 0;
unsigned long long int var_12 = 14458478953218071806ULL;
short var_13 = (short)-23173;
void init() {
}

void checksum() {
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
