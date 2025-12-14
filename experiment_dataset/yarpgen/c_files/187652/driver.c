#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6416668766010294238LL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)40;
long long int var_4 = 3557659911118365943LL;
unsigned char var_8 = (unsigned char)183;
unsigned long long int var_9 = 5414675018064898382ULL;
int zero = 0;
unsigned long long int var_13 = 14184609880916127750ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2930610478494134866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
