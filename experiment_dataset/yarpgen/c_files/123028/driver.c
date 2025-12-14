#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9040603909726339001LL;
unsigned char var_5 = (unsigned char)156;
long long int var_7 = -8712637321963450768LL;
unsigned char var_11 = (unsigned char)52;
int var_12 = 1610924967;
short var_16 = (short)25555;
unsigned char var_17 = (unsigned char)15;
int zero = 0;
short var_20 = (short)-21359;
long long int var_21 = 4902246759795776330LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
