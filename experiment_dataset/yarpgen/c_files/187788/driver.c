#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
long long int var_2 = -120910282485287187LL;
unsigned long long int var_4 = 41283789113115849ULL;
long long int var_5 = 6817934512552578902LL;
unsigned char var_8 = (unsigned char)65;
long long int var_10 = -690017542422691404LL;
long long int var_11 = 7923441963916711172LL;
int zero = 0;
long long int var_16 = -4708273554074262628LL;
unsigned char var_17 = (unsigned char)65;
unsigned char var_18 = (unsigned char)50;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
