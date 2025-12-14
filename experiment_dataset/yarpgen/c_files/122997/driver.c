#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
short var_1 = (short)-9698;
long long int var_2 = 5707586602117691766LL;
long long int var_3 = -6086981510301643024LL;
short var_6 = (short)-19523;
unsigned char var_7 = (unsigned char)30;
int var_11 = -1353025823;
int zero = 0;
unsigned char var_13 = (unsigned char)92;
signed char var_14 = (signed char)67;
void init() {
}

void checksum() {
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
