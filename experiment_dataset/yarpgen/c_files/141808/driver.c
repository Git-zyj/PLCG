#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8005420814531106946LL;
long long int var_2 = 6794737323324721511LL;
long long int var_4 = -6977287668988081017LL;
long long int var_5 = -19833904221158578LL;
long long int var_9 = 5322664009629503550LL;
unsigned long long int var_10 = 14126609406769838130ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)192;
int var_14 = -23537490;
short var_15 = (short)-5329;
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
