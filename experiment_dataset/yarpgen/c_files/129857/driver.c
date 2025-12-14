#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15279936481507706673ULL;
unsigned long long int var_4 = 10350474716130617847ULL;
unsigned long long int var_6 = 11252642458124345380ULL;
unsigned long long int var_8 = 864238265004114052ULL;
unsigned long long int var_9 = 1702523844664706889ULL;
unsigned long long int var_10 = 15252535791738680448ULL;
unsigned long long int var_11 = 6170988814946806841ULL;
unsigned long long int var_12 = 5719213872173846860ULL;
unsigned long long int var_13 = 14493707043207306845ULL;
int zero = 0;
unsigned long long int var_14 = 950132468987183409ULL;
unsigned long long int var_15 = 13240100224107013315ULL;
unsigned long long int var_16 = 1167026175048132666ULL;
unsigned long long int var_17 = 17387644068703268288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
