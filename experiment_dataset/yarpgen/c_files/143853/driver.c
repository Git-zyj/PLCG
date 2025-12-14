#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18052423743149552482ULL;
unsigned long long int var_5 = 4766542983711144175ULL;
int var_6 = 1133998834;
int var_7 = -871891354;
long long int var_8 = 5641966288627013172LL;
long long int var_9 = -5684047424786685060LL;
unsigned long long int var_14 = 17380062983351407380ULL;
int zero = 0;
long long int var_17 = 6521348311628381834LL;
int var_18 = 1867975259;
long long int var_19 = 1038844536846527219LL;
int var_20 = -924916531;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
