#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
long long int var_8 = -5663146569386960518LL;
long long int var_11 = -2017531627017601704LL;
int var_14 = 953529376;
int zero = 0;
unsigned short var_18 = (unsigned short)56406;
long long int var_19 = 2340375845602161998LL;
unsigned long long int var_20 = 7779772392029557815ULL;
unsigned int var_21 = 3564677158U;
unsigned long long int var_22 = 15806290236622711500ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
